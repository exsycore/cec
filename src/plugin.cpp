#include "plugin.h"

const char* Plugin::Name() { return "CEC Plugin (open.mp)"; }
int Plugin::Version() { return PACK_PLUGIN_VERSION(2, 7, 0); }

bool Plugin::OnLoad()
{
    RegisterNative<&Script::CE_Convert>("CE_Convert");
    RegisterNative<&Script::CE_Convert_Dialog>("CE_Convert_Dialog");
    RegisterNative<&Script::CE_CountTag>("CE_CountTag");
    RegisterNative<&Script::CE_CountVowel>("CE_CountVowel");

    Log("\n"
        " |----------------------------------------------------|\n"
        " "
        "    < cec 2.7 (open.mp) | Copyright 2020-2025 > \n"
        "        Author: Ak-kawit \"B-Less\" Tahae\n"
        "        Editor: EasyCore \"E-Core\" .....\n"
        "   Repository: https://github.com/Brian-Less/cec\n"
        "   Repository: https://github.com/exsycore/cec-omp\n"
        " "
        " |----------------------------------------------------|\n"
    );
    return true;
}

void Plugin::OnUnload()
{
    Log("CEC v2.6 (open.mp) unloaded");
}