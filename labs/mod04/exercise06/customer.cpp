//
// Created by binku on 8/19/2025.
//

#include "customer.h"

namespace banking {
    Customer::Customer(string firstName, string lastName)
        : firstName(firstName), lastName(lastName), account(nullptr) {
    }

    string Customer::getFirstName() const {
        return firstName;
    }

    string Customer::getLastName() const {
        return lastName;
    }

    Account* Customer::getAccount() {
        return account;
    }

    void Customer::setAccount(Account* account) {
        this->account = account;
    }

    Customer::~Customer() {
        if (account != nullptr) {
            delete account;
        }
    }
} // banking
