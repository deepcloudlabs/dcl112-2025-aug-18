#include "customer.h"

#include <utility>

namespace banking {
    Customer::Customer(string firstName, string lastName)
        : firstName(std::move(firstName)), lastName(std::move(lastName)),
          accounts{} {
    }

    string Customer::getFirstName() const {
        return firstName;
    }

    string Customer::getLastName() const {
        return lastName;
    }

    Account *Customer::getAccount(const int index) const {
        if (index < 0 || index >= accounts.size()) {
            return nullptr;
        }
        return this->accounts[index];
    }

    void Customer::addAccount(Account *acc) {
        accounts.insert(accounts.end(),acc);
    }

    int Customer::getNumberOfAccounts() const {
        return accounts.size();
    }

    Customer::~Customer() {
        for (const auto account : accounts) {
            delete account;
        }
    }
} // banking
