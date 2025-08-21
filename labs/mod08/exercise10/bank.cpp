#include "bank.h"

#include <utility>

namespace banking {
    void Bank::shutdown() {
        for (const auto customer: customers) {
            delete customer;
        }
    }

    Customer *Bank::addCustomer(string firstName, string lastName) {
        const auto customer = new Customer(std::move(firstName), std::move(lastName));
        customers.push_back(customer);
        return customer;
    }


    Customer *Bank::getCustomer(int index) {
        if (index < 0 || index >= customers.size()) {
            return nullptr;
        }
        return customers[index];
    }

    vector<Customer *> Bank::customers{};
} // banking
