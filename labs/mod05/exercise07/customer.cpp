#include "customer.h"

#include <utility>

namespace banking {
    Customer::Customer(string firstName, string lastName)
        : firstName(std::move(firstName)), lastName(std::move(lastName)), account(nullptr) {
    }

    string Customer::getFirstName() const {
        return firstName;
    }

    string Customer::getLastName() const {
        return lastName;
    }

    Account *Customer::getAccount() const {
        return account;
    }

    void Customer::setAccount(Account *acc) {
        this->account = acc;
    }

    Customer::~Customer() {
        if (account != nullptr) {
            delete account;
        }
    }
} // banking
