#include "bank.h"

#include <utility>

namespace banking {
    void Bank::shutdown () {
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


    Customer* Bank::getCustomer(int index) {
        if (index <0 || index >= numberOfCustomers) {
            return nullptr;
        }
        return customers[index];
    }
    Customer **Bank::customers = nullptr;
    int Bank::numberOfCustomers=0;
} // banking