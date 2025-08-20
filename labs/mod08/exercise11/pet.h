//
// Created by binku on 8/20/2025.
//

#ifndef DCL113_2025_AUG_18_PET_H
#define DCL113_2025_AUG_18_PET_H
#include <string>

namespace zoo {
    class pet { // interface
    public:
        virtual ~pet() =default;

        virtual std::string &getName() = 0;

        virtual void setName(std::string &name) = 0;

        virtual void play() =0;
    };
} // zoo

#endif //DCL113_2025_AUG_18_PET_H
