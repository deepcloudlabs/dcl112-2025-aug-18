#ifndef DCL113_2025_AUG_18_ACCOUNT_H
#define DCL113_2025_AUG_18_ACCOUNT_H
#include <string>

using namespace std;

namespace banking {
    class Account {
        double balance;

    public:
        // methods
        Account(double balance = 0.0); // declaration
        inline double getBalance() const { return balance; } // declaration + definition
        // business methods
        bool withdraw(const double amount); // declaration
        bool deposit(const double amount); // declaration
        Account operator+(Account &other);
    };
} // banking

#endif //DCL113_2025_AUG_18_ACCOUNT_H
