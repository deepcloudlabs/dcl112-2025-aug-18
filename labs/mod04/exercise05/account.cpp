#include "account.h"


// definitions
banking::Account::Account(const double balance) {
    this->balance = balance;
}

banking::Account banking::Account::operator+(const Account &other) const {
    return Account{this->balance + other.balance};
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
