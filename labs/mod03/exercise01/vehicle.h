//
// Created by binku on 8/19/2025.
//

#ifndef DCL113_2025_AUG_18_VEHICLE_H
#define DCL113_2025_AUG_18_VEHICLE_H

namespace siemens {
    class Vehicle {
    public:
        double load;
        double maxLoad;
        Vehicle(double max_Load) {
            this->maxLoad = max_Load;
            this->load = 0;
        }
        double getLoad() const;
        double getMaxLoad() const;
    };
} // siemens

#endif //DCL113_2025_AUG_18_VEHICLE_H