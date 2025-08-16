#ifndef CEC_SCRIPT_H
#define CEC_SCRIPT_H

#include <samp-ptl/ptl.h>

class Script : public ptl::AbstractScript<Script>
{
    public:
        cell CE_Convert(std::string input, cell* output, cell size);
        cell CE_Convert_Dialog(std::string input, cell* output, int style, cell size);
        cell CE_CountTag(std::string input);
        cell CE_CountVowel(std::string input);
};

#endif