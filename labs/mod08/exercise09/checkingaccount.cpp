#include "checkingaccount.h"

namespace banking {
    CheckingAccount::CheckingAccount(const double balance, const double overdraft_amount)
        : Account(balance), overdraft_amount(overdraft_amount) {
    }

    // override
    bool CheckingAccount::withdraw(const double amount) {
        if (amount <= 0) {
            // validation
            return false;
        }
        if (amount > (balance + overdraft_amount)) {
            return false;
        }
        balance -= amount;
        return true;
    }
} // banking
