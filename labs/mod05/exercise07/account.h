#ifndef DCL113_2025_AUG_18_ACCOUNT_H
#define DCL113_2025_AUG_18_ACCOUNT_H
#include <string>

using namespace std;

namespace banking {
    class Account {
        double balance;

    public:
        // methods
        explicit Account(double balance = 0.0); // declaration
        [[nodiscard]] double getBalance() const { return balance; } // declaration + definition
        // business methods
        bool withdraw(double amount); // declaration
        bool deposit(double amount); // declaration
        Account operator+(const Account &other) const;
    };
} // banking

#endif //DCL113_2025_AUG_18_ACCOUNT_H
