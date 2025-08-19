#include "account.h"
#include <iostream>

using namespace banking;
using namespace std;

int main() {
    // stack object: iban+balance
    account acc1{"tr1"};
    account acc2{"tr2", 1'000'000};

    acc1.deposit(-10'000);
    acc2.withdraw(10'000'000);
     cout << "acc1[ iban: " << acc1.get_iban()
          << ", balance: " << acc1.get_balance()
          << " ]" << endl;
    cout << "acc2[ iban: " << acc2.get_iban()
          << ", balance: " << acc2.get_balance()
          << " ]" << endl;
    return 0;
}