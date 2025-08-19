//
// Created by binku on 8/19/2025.
//

#ifndef DCL113_2025_AUG_18_VEHICLE_H
#define DCL113_2025_AUG_18_VEHICLE_H

namespace siemens {
    class Vehicle {
    private:
        double load; // newton
        double maxLoad; // newton
    public:
        Vehicle(double max_Load) { // accepts kg
            this->maxLoad = kiloToNews(max_Load);
            this->load = kiloToNews(0);
        }
        double getLoad() const; // newton -> kg
        double getMaxLoad() const; // newton -> kg
        bool addBox(const double weight); // kg -> newton
    private:
        double newsToKilo(double weight) const;
        double kiloToNews(double weight) const;
    };
} // siemens

#endif //DCL113_2025_AUG_18_VEHICLE_H