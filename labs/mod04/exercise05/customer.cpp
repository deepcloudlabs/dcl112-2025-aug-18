#include "customer.h"

#include <utility>

namespace banking {
    Customer::Customer(string firstName, string lastName)
        : firstName(std::move(firstName)), lastName(std::move(lastName)), account(Account{0}) {
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

    void Customer::setAccount(const Account acc) {
        this->account = acc;
    }
} // banking
