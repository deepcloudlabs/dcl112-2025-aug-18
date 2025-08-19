//
// Created by binku on 8/19/2025.
//

#include "account.h"

namespace banking {
    // definitions
    account::account(string iban, double balance) {
        this->iban = iban;
        this->balance = balance;
    }

    double account::withdraw(const double amount) {
        // validation
        if (amount <= 0.0) {
            return this->balance;
        }
        // business rule
        if (amount > this->balance) {
            return this->balance;
        }
        this->balance -= amount;
        return this->balance;
    }

    double account::deposit(const double amount) {
        // validation
        if (amount <= 0.0) {
            return this->balance;
        }
        this->balance += amount;
        return this->balance;
    }
} // banking
