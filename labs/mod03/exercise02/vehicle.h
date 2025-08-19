#ifndef DCL113_2025_AUG_18_VEHICLE_H
#define DCL113_2025_AUG_18_VEHICLE_H

namespace siemens {
    class Vehicle {
    private:
        double load;
        double maxLoad;
    public:
        explicit Vehicle(double max_Load) {
            this->maxLoad = max_Load;
            this->load = 0;
        }
        [[nodiscard]] double getLoad() const;
        [[nodiscard]] double getMaxLoad() const;
        bool addBox(double weight);
    };
} // siemens

#endif //DCL113_2025_AUG_18_VEHICLE_H