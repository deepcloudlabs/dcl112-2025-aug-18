//
// Created by binku on 8/19/2025.
//

#ifndef DCL113_2025_AUG_18_VEHICLE_H
#define DCL113_2025_AUG_18_VEHICLE_H

namespace siemens {
    class Vehicle {
    private:
        double load;
        double maxLoad;
    public:
        Vehicle(double max_Load) {
            this->maxLoad = max_Load;
            this->load = 0;
        }
        double getLoad() const;
        double getMaxLoad() const;
        bool addBox(const double weight);
    };
} // siemens

#endif //DCL113_2025_AUG_18_VEHICLE_H