#include "savingsaccount.h"

namespace banking {
    SavingsAccount::SavingsAccount(const double balance, const double interest_rate) : Account(balance),
        interest_rate(interest_rate) {
    }
} // banking
