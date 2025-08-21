#ifndef DCL113_2025_AUG_18_ANIMAL_H
#define DCL113_2025_AUG_18_ANIMAL_H
#include <iostream>

namespace zoo {
    class animal { // abstract class -> cannot instantiate an object
    protected:
        int legs;

    public:
        explicit animal(const int legs) : legs(legs) {
        }

        virtual void walk(); // concrete

        virtual void eat() = 0; // pure virtual method = abstract method

        virtual ~animal() {
            std::cout << "animal::~animal()" << std::endl;
        }
    };
} // zoo

#endif //DCL113_2025_AUG_18_ANIMAL_H
