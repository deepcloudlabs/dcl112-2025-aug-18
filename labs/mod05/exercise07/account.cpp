//
// Created by binku on 8/19/2025.
//

#include "account.h"


// definitions
banking::Account::Account(double balance) {
    this->balance = balance;
}

banking::Account banking::Account::operator+(Account& other) {
    return Account(this->balance + other.balance);
}

bool banking::Account::withdraw(const double amount) {
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

bool banking::Account::deposit(const double amount) {
    // validation
    if (amount <= 0.0) {
        return false;
    }
    this->balance += amount;
    return true;
}
