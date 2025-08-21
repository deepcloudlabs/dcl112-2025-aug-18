#include "account.h"
#include <iostream>

using namespace std;

void
print_account(const banking::account &acc) {
    cout << "account[ iban: " << acc.get_iban()
            << ", balance: " << acc.get_balance()
            << " ]" << endl;
    // acc.withdraw(1'000); // error: cannot make a call to non-const methods!
}

int main() {
    // stack object
    banking::account acc1{"tr3"};

    acc1.deposit(100'000);
    acc1.withdraw(10'000);

    // constant object -> const methods
    const banking::account acc2{"tr4"};
    acc2.get_iban(); // can make a call to constant method!
    acc2.get_balance(); // can make a call to constant method!
    // acc2.withdraw(1'000); // error: non-const method! error
    // acc2.deposit(1'000); // error: non-const method! error
}
