#include "bank.h"

#include <utility>

namespace banking {
    Bank::~Bank () {
        if (numberOfCustomers > 0 && customers != nullptr) {
            for (auto i=0; i < numberOfCustomers; i++) {
                auto customer = customers[i];
                delete customer;
            }
            delete [] customers;
        }
    }

    Customer* Bank::addCustomer(string firstName,string lastName) {
        const auto customer = new Customer(std::move(firstName), std::move(lastName));
        const auto newCustomers = new Customer*[numberOfCustomers+1];
        for (auto i=0; i < numberOfCustomers; i++) {
            newCustomers[i] = customers[i];
        }
        newCustomers[numberOfCustomers] = customer;
        delete [] customers;
        numberOfCustomers++;
        customers = newCustomers;
        return customer;
    }

    Customer* Bank::getCustomer(int index) const {
        if (index <0 || index >= numberOfCustomers) {
            return nullptr;
        }
        return customers[index];
    }
} // banking