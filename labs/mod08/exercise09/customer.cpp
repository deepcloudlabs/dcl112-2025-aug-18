#include "customer.h"

#include <utility>

namespace banking {
    Customer::Customer(string firstName, string lastName)
        : firstName(std::move(firstName)), lastName(std::move(lastName)),
          accounts(nullptr), numberOfAccounts(0) {
    }

    string Customer::getFirstName() const {
        return firstName;
    }

    string Customer::getLastName() const {
        return lastName;
    }

    Account *Customer::getAccount(const int index) const {
        if (index < 0 || index >= numberOfAccounts) {
            return nullptr;
        }
        return this->accounts[index];
    }

    void Customer::addAccount(Account *acc) {
        auto newAccounts = new Account *[this->numberOfAccounts + 1];
        for (int i = 0; i < this->numberOfAccounts; i++) {
            newAccounts[i] = this->accounts[i];
        }
        newAccounts[this->numberOfAccounts] = acc;
        this->numberOfAccounts++;
        delete[] this->accounts;
        this->accounts = newAccounts;
    }

    int Customer::getNumberOfAccounts() const {
        return this->numberOfAccounts;
    }

    Customer::~Customer() {
        if (accounts != nullptr) {
            for (int i = 0; i < this->numberOfAccounts; i++) {
                delete this->accounts[i];
            }
            delete accounts;
        }
    }
} // banking
