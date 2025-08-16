#ifndef CEC_MAIN_H
#define CEC_MAIN_H

#define _GLIBCXX_USE_CXX11_ABI 1

#include <sdk.hpp>
#include <Server/Components/Pawn/pawn.hpp>

#ifdef THISCALL
#undef THISCALL
#endif

#ifdef _WIN32
#define THISCALL __thiscall
#else
#define THISCALL
#endif

#include "script.h"
#include "plugin.h"

class ColourFix final : public IComponent, 
                        public CoreEventHandler, 
                        public PawnEventHandler
{
    public:
        PROVIDE_UID(0x917424EC59E485EF);

        StringView componentName() const override;

        SemanticVersion componentVersion() const override;

        void onLoad(ICore *c) override;

        void onInit(IComponentList *components) override;

        void onReady() override;

        void onTick(Microseconds elapsed, TimePoint now) override;

        void onFree(IComponent *component) override;

        void free() override;

        void reset() override;

        void onAmxLoad(IPawnScript& script) override;

	    void onAmxUnload(IPawnScript& script) override;

        static void PluginLogprintf(const char *fmt, ...);
        
        static ICore *&getCore();

        ~ColourFix();

    private:
        ICore *core_ = nullptr;
        IPawnComponent* pawn_{};

        void *plugin_data_[MAX_PLUGIN_DATA]{};
};

#endif