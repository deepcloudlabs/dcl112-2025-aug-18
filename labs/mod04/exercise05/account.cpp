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

double banking::Account::withdraw(const double amount) {
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

double banking::Account::deposit(const double amount) {
    // validation
    if (amount <= 0.0) {
        return this->balance;
    }
    this->balance += amount;
    return this->balance;
}
