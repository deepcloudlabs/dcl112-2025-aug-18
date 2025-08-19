//
// Created by binku on 8/19/2025.
//

#include "customer.h"

namespace banking {
    Customer::Customer(string firstName, string lastName)
        : firstName(firstName), lastName(lastName), account(Account{0}) {
    }

    string Customer::getFirstName() const {
        return firstName;
    }

    string Customer::getLastName() const {
        return lastName;
    }

    Account &Customer::getAccount() {
        return account;
    }

    void Customer::setAccount(Account account) {
        this->account = account;
    }
} // banking
