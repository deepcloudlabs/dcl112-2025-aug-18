//
// Created by binku on 8/20/2025.
//

#include "fish.h"

namespace zoo {
    void fish::walk() {
        std::cout << "Fish[" << name << "] is swimming now..." << std::endl;
    }

    void fish::eat() {
        std::cout << "Fish[" << name << "] is eating now..." << std::endl;
    }

    std::string &fish::getName() {
        return name;
    }

    void fish::setName(std::string &name) {
        this->name = name;
    }

    void fish::play() {
        std::cout << name << " is playing now..." << std::endl;
    }
} // zoo
