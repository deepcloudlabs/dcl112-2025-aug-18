//
// Created by binku on 8/19/2025.
//

#include "account.h"


// definitions
banking::account::account(string iban, double balance) {
    this->iban = iban;
    this->balance = balance;
}

double banking::account::withdraw(const double amount) {
    // validation
    if (amount <= 0.0) {
        return this->balance;
    }
    // business rule
    if (amount > this->balance) {
        return this->balance;
    }
    balance -= amount;
    return this->balance;
}

double banking::account::deposit(const double amount) {
    // validation
    if (amount <= 0.0) {
        return this->balance;
    }
    this->balance += amount;
    return this->balance;
}
