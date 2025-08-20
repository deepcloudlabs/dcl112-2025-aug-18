#include "savingsaccount.h"

#include <iostream>
#include <ostream>

namespace banking {
    SavingsAccount::SavingsAccount(const double balance, const double interest_rate) : Account(balance),
        interest_rate(interest_rate) {
    }

    bool SavingsAccount::withdraw(double amount) {
        cout << "SavingsAccount::withdraw" << endl;
        return false;
    }

    bool SavingsAccount::deposit(double amount) {
        cout << "SavingsAccount::deposit" << endl;
        return false;
    }
} // banking
