#include "bank.h"
#include "customer.h"
#include "account.h"
#include "checkingaccount.h"
#include "savingsaccount.h"
#include "CustomerReport.h"
using namespace std;
using namespace banking;

void initializeCustomers();

int main() {
    initializeCustomers();

    // run the customer report
    CustomerReport::generateReport();
    Bank::shutdown();
    return 0;
}

void initializeCustomers() {
    Customer *customer = nullptr;

    // Create several customers and their accounts
    Bank::addCustomer("Jane", "Simms");
    customer = Bank::getCustomer(0);
    customer->addAccount(new SavingsAccount(500.00, 0.05));
    customer->addAccount(new CheckingAccount(200.00, 400.00));

    Bank::addCustomer("Owen", "Bryant");
    customer = Bank::getCustomer(1);
    customer->addAccount(new CheckingAccount(200.00));

    Bank::addCustomer("Tim", "Soley");
    customer = Bank::getCustomer(2);
    customer->addAccount(new SavingsAccount(1500.00, 0.05));
    customer->addAccount(new CheckingAccount(200.00));

    Bank::addCustomer("Maria", "Soley");
    customer = Bank::getCustomer(3);
    customer->addAccount(new SavingsAccount(150.00, 0.05));

    for (int i = 0; i < Bank::getNumberOfCustomers(); ++i) {
        auto customer = Bank::getCustomer(i);
        for (int j = 0; j < customer->getNumberOfAccounts(); ++j) {
            Account *account = customer->getAccount(j);
            account->withdraw(100);
        }
    }
}
