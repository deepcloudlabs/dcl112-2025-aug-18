#include "account.h"
#include "customer.h"
#include <iostream>
#include <string>
using namespace std;
using namespace banking;

int main() {
    Customer *customer;
    Account account(0.0);

    // Create an account that can has a 500.00 balance.
    cout << endl << "Creating the customer Jane Smith.";
    customer = new Customer(string("Smith"), string("Smith"));
    cout << endl << "Creating her account with a 500.00 balance.";
    customer->setAccount(Account(500.00));
    account = customer->getAccount();

    cout << endl << "Withdraw 150.00";
    account.withdraw(150.00);

    cout << endl << "Deposit 22.50";
    account.deposit(22.50);

    cout << endl << "Withdraw 47.62";
    account.withdraw(47.62);

    // Print out the final account balance
    cout  << endl 
          << "Customer [" 
          << customer->getLastName()
	  << ", " 
          << customer->getFirstName()
	  << "] has a balance of " 
          << account.getBalance() 
          << endl;     
    delete customer;

    Account acc1(100),acc2(200);
    Account sumAcc= acc1+acc2;
    cout << "Balance of sumAcc is " << sumAcc.getBalance() << endl;
    return 0;
}

