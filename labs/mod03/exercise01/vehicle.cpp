#include "vehicle.h"

namespace siemens {
    double Vehicle::getLoad() const {
        return load;
    }

    double Vehicle::getMaxLoad() const {
        return maxLoad;
    }
} // siemens