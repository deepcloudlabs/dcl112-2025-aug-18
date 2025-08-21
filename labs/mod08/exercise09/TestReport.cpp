#include "bank.h"
#include "customer.h"
#include "account.h"
#include "checkingaccount.h"
#include "savingsaccount.h"
#include "CustomerReport.h"
using namespace std;
using namespace banking;

void initializeCustomers(Bank *);

int main() {
    auto bank = new Bank();
    initializeCustomers(bank);

    // run the customer report
    const auto report = new CustomerReport();
    report->setBank(bank);
    report->generateReport();

    return 0;
}

void initializeCustomers(Bank *bank) {
    Customer *customer = nullptr;

    // Create several customers and their accounts
    bank->addCustomer("Jane", "Simms");
    customer = bank->getCustomer(0);
    customer->addAccount(new SavingsAccount(500.00, 0.05));
    customer->addAccount(new CheckingAccount(200.00, 400.00));

    bank->addCustomer("Owen", "Bryant");
    customer = bank->getCustomer(1);
    customer->addAccount(new CheckingAccount(200.00));

    bank->addCustomer("Tim", "Soley");
    customer = bank->getCustomer(2);
    customer->addAccount(new SavingsAccount(1500.00, 0.05));
    customer->addAccount(new CheckingAccount(200.00));

    bank->addCustomer("Maria", "Soley");
    customer = bank->getCustomer(3);
    customer->addAccount(new SavingsAccount(150.00, 0.05));
}
