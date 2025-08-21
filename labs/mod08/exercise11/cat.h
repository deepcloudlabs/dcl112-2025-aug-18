//
// Created by binku on 8/20/2025.
//

#ifndef DCL113_2025_AUG_18_CAT_H
#define DCL113_2025_AUG_18_CAT_H
#include <utility>

#include "animal.h"
#include "pet.h"

namespace zoo {
    class cat : public animal, public pet {
        std::string name;

    public:
        explicit cat()
            : animal(4), name(std::string("Tekir")) {
        }

        explicit cat(std::string name)
            : animal(4), name(std::move(name)) {
        }

        void eat() override;

        std::string &getName() override;

        void setName(std::string &name) override;

        void play() override;

        ~cat() {
            std::cout << "cat::~cat()" << std::endl;
        }
    };
} // zoo

#endif //DCL113_2025_AUG_18_CAT_H
