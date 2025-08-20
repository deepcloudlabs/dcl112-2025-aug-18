#include "checkingaccount.h"
#include <iostream>

using namespace std;

namespace banking {
    CheckingAccount::CheckingAccount(const double balance, const double overdraft_amount)
        : Account(balance), overdraft_amount(overdraft_amount)
    {

    }
    // override
    bool CheckingAccount::withdraw(const double amount) {
        cout << "CheckingAccount's withdraw() is running..." << endl;
       if (amount <= 0) { // validation
            return false;
        }
        if (amount > (balance+overdraft_amount)) {
            return false;
        }
        balance -= amount;
        return true;
    }

    bool banking::CheckingAccount::deposit(const double amount) {
        cout << "Account's deposit() is running..." << endl;
        // validation
        if (amount <= 0.0) {
            return false;
        }
        this->balance += amount;
        return true;
    }
} // banking