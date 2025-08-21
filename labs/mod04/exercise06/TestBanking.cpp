#include "Account.h"
#include "Customer.h"
#include <iostream>
using namespace std;
using namespace banking;

int main(int argc, char **argv) {
    Customer *customer;
    Account *account;

    // Create an account that can has a 500.00 balance.
    cout << endl << "Creating the customer Jane Smith.";
    customer = new Customer("Jane", "Smith");
    cout << endl << "Creating her account with a 500.00 balance.";
    customer->setAccount(new Account(500.00));
    account = customer->getAccount();

    cout << endl << "Withdraw 150.00 : "
            << (account->withdraw(150.00) ? "true" : "false");

    cout << endl << "Deposit 22.50 : "
            << (account->deposit(22.50) ? "true" : "false");

    cout << endl << "Withdraw 47.62 : "
            << (account->withdraw(47.62) ? "true" : "false");

    cout << endl << "Withdraw 400.0 : "
            << (account->withdraw(400.0) ? "true" : "false");

    // Print out the final account balance
    cout << endl
            << "Customer ["
            << customer->getLastName()
            << ", "
            << customer->getFirstName()
            << "] has a balance of "
            << account->getBalance()
            << endl;
    delete customer; // triggers ~Customer() -> delete account!
    return 0;
}
