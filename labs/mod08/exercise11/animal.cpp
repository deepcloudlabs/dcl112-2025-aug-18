//
// Created by binku on 8/20/2025.
//

#include "animal.h"

namespace zoo {
    void animal::walk() {
        std::cout << "Animal with "
                << this->legs << " legs is walking now..." << std::endl;
    }
} // zoo
