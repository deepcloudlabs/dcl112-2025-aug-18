#include "account.h"

#include <iostream>
#include <ostream>


// definitions
banking::Account::Account(double balance) {
    this->balance = balance;
}

bool banking::Account::withdraw(const double amount) {
    cout << "Account's withdraw() is running..." << endl;
    // validation
    if (amount <= 0.0) {
        return false;
    }
    // business rule
    if (amount > this->balance) {
        return false;
    }
    balance -= amount;
    return true;
}


