#ifndef DCL113_2025_AUG_18_VEHICLE_H
#define DCL113_2025_AUG_18_VEHICLE_H

namespace siemens {
    class Vehicle {
    private:
        double load; // newton
        double maxLoad; // newton
    public:
        explicit Vehicle(double max_Load) {
            // accepts kg
            this->maxLoad = kiloToNews(max_Load);
            this->load = kiloToNews(0);
        }

        [[nodiscard]] double getLoad() const; // newton -> kg
        [[nodiscard]] double getMaxLoad() const; // newton -> kg
        bool addBox(double weight); // kg -> newton

    private:
        [[nodiscard]] static double kiloToNews(double weight);

        [[nodiscard]] static double newsToKilo(double weight);
    };
} // siemens

#endif //DCL113_2025_AUG_18_VEHICLE_H
