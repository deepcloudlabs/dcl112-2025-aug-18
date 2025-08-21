#ifndef DCL113_2025_AUG_18_SAVINGSACCOUNT_H
#define DCL113_2025_AUG_18_SAVINGSACCOUNT_H
#include "account.h"

namespace banking {
    class SavingsAccount : public Account {
    private:
        double interest_rate;

    public:
        explicit SavingsAccount(double balance, double interest_rate);
    };
} // banking

#endif //DCL113_2025_AUG_18_SAVINGSACCOUNT_H
