//
// Created by binku on 8/20/2025.
//

#include "cat.h"

namespace zoo {
    void cat::eat() {
        std::cout << name << " is eating now..." << std::endl;
    }

    std::string &cat::getName() {
        return name;
    }

    void cat::setName(std::string &name) {
        this->name = name;
    }

    void cat::play() {
        std::cout << name << " is playing now..." << std::endl;
    }
} // zoo
