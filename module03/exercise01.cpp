#include "account.h"
#include <iostream>

using namespace std;

void
print_account(const banking::account& acc) {
    cout << "account[ iban: " << acc.get_iban()
         << ", balance: " << acc.get_balance()
         << " ]" << endl;
}

int main() {
    double x{3.14}; // uniform initialization
    int y{};
    int z();
    int m = int();
    // stack object
    banking::account acc1{"tr3"};
    // stack array
    banking::account bank_accounts[] {
        {"tr10", 1'000'000},
        {"tr20", 2'000'000},
        {"tr30", 3'000'000}, // 3'100'000
        {"tr40", 4'000'000}
    };
    acc1.withdraw(100'000); // withdraw(&acc1,100'000)
    print_account(bank_accounts[2]);
    bank_accounts[2].deposit(100'000);
    print_account(bank_accounts[2]);
}