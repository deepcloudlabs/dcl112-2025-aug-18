#include <iostream>
using namespace std;
#include "bank.h"
#include "customer.h"

using namespace banking;

int main() {
    Bank *bank = new Bank();

    bank->addCustomer("Jane", "Simms");
    bank->addCustomer("Owen", "Bryant");
    bank->addCustomer("Tim", "Soley");
    bank->addCustomer("Maria", "Soley");

    for (int i = 0; i < bank->getNumberOfCustomers(); i++) {
        Customer *customer = bank->getCustomer(i);

        cout << "Customer ["
                << (i + 1) << "] is "
                << customer->getLastName()
                << ", "
                << customer->getFirstName()
                << endl;
    }
    return 0;
}
