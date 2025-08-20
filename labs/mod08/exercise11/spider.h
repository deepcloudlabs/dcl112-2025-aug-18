//
// Created by binku on 8/20/2025.
//

#ifndef DCL113_2025_AUG_18_SPIDER_H
#define DCL113_2025_AUG_18_SPIDER_H
#include "animal.h"

namespace zoo {
    class spider : public animal {
    public:
        explicit spider()
            : animal(8) {
        }

        void eat() override;
    };
} // zoo

#endif //DCL113_2025_AUG_18_SPIDER_H