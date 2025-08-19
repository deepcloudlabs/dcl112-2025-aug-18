#include "account.h"
#include <iostream>

using namespace std;

void
print_account(const banking::account& acc) {
    cout << "account[ iban: " << acc.get_iban()
         << ", balance: " << acc.get_balance()
         << " ]" << endl;
}

void
print_account(const banking::account* acc) {
    cout << "account[ iban: " << acc->get_iban()
         << ", balance: " << acc->get_balance()
         << " ]" << endl;
}

int main() {
    // heap object
    banking::account *p = new banking::account("TR42", 100'000'000);
    p->withdraw(10'000'000);
    (*p).withdraw(10'000'000);
    p->deposit(2'500'000);
    p[0].deposit(2'500'000);
    print_account(p);
    delete p;
    return 0;
}