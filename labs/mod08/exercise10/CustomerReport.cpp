#include "CustomerReport.h"
#include <iostream>
using namespace std;
#include "savingsaccount.h"
#include "checkingaccount.h"

using namespace banking;

void CustomerReport::generateReport() {
    // Print report header
    cout << "\t\t\tCUSTOMERS REPORT" << endl;
    cout << "\t\t\t================" << endl;

    // For each customer
    for (int cust_idx = 0;
         cust_idx < Bank::getNumberOfCustomers();
         cust_idx++) {
        Customer *customer = Bank::getCustomer(cust_idx);

        // Print the customer's name
        cout << "Customer: "
                << customer->getLastName() << ", "
                << customer->getFirstName()
                << endl;

        // For each account for this customer->..
        for (int acct_idx = 0;
             acct_idx < customer->getNumberOfAccounts();
             acct_idx++) {
            Account *account = customer->getAccount(acct_idx);
            string account_type = "";

            // Determine the account type
            if (typeid(*account) == typeid(SavingsAccount)) {
                account_type = "Savings Account";
            } else if (typeid(*account) == typeid(CheckingAccount)) {
                account_type = "Checking Account";
            } else {
                account_type = "Unknown Account Type";
            }

            // Print the current balance of the account
            cout << "    "
                    << account_type
                    << ": current balance is "
                    << account->getBalance()
                    << endl;
        }
    }
}
