#ifndef DCL113_2025_AUG_18_CHECKINGACCOUNT_H
#define DCL113_2025_AUG_18_CHECKINGACCOUNT_H
#include "account.h"

namespace banking {
    class CheckingAccount : public Account {
        double overdraft_amount;

    public:
        explicit CheckingAccount(double balance = 0.0, double overdraft_amount = 0.0);
        [[nodiscard]] double getOverdraft_amount() const {return overdraft_amount;}
        // override
        bool withdraw(double amount);
    };
} // banking
/*
 banking::CheckingAccount ca1{1'000'000,100'000};
banking::CheckingAccount ca2{1'000'000};
banking::CheckingAccount ca3{};
*/
#endif //DCL113_2025_AUG_18_CHECKINGACCOUNT_H
