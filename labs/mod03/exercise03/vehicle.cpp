#include "vehicle.h"

namespace siemens {
    double Vehicle::getLoad() const {
        // kg
        return newsToKilo(load);
    }

    double Vehicle::getMaxLoad() const {
        // kg
        return newsToKilo(maxLoad);
    }

    bool Vehicle::addBox(const double weight) {
        // kg
        auto weight_in_newton = kiloToNews(weight);
        // validation
        if (weight_in_newton <= 0) {
            return false;
        }
        // business rule
        if ((load + weight_in_newton) > maxLoad) {
            return false;
        }
        load += weight_in_newton;
        return true;
    }

    double Vehicle::newsToKilo(const double weight) {
        return weight / 9.8;
    }

    double Vehicle::kiloToNews(const double weight) {
        return 9.8 * weight;
    }
} // siemens
