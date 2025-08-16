#ifndef CEC_PLUGIN_H
#define CEC_PLUGIN_H

#include "script.h"

class Plugin : public ptl::AbstractPlugin<Plugin, Script>
{
    public:
        const char* Name();
        int Version();
        bool OnLoad();
        void OnUnload();
};

#endif