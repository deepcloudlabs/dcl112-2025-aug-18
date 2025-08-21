//
// Created by binku on 8/20/2025.
//

#ifndef DCL113_2025_AUG_18_FISH_H
#define DCL113_2025_AUG_18_FISH_H
#include <utility>

#include "animal.h"
#include "pet.h"

namespace zoo {
    class fish : public animal, public pet {
        std::string name;

    public:
        explicit fish(std::string name)
            : animal(0), name(std::move(name)) {
        }

        void walk() override;

        void eat() override;

        std::string &getName() override;

        void setName(std::string &name) override;

        void play() override;

        ~fish()  {
            std::cout << "fish::~fish()" << std::endl;
        }
    };
} // zoo

#endif //DCL113_2025_AUG_18_FISH_H
