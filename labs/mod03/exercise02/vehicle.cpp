#include "vehicle.h"

namespace siemens {
    double Vehicle::getLoad() const {
        return load;
    }

    double Vehicle::getMaxLoad() const {
        return maxLoad;
    }

    bool Vehicle::addBox(const double weight) {
        // validation
        if (weight <= 0) {
            return false;
        }
        // business rule
        if ((load + weight) > maxLoad) {
            return false;
        }
        load += weight;
        return true;
    }
} // siemens
