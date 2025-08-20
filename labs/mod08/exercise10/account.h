#ifndef DCL113_2025_AUG_18_ACCOUNT_H
#define DCL113_2025_AUG_18_ACCOUNT_H
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

namespace banking {
    class Account {
    private:
    protected:
        double balance;
    public:
        explicit Account(double balance=0.0); // declaration
        // methods
        [[nodiscard]] double getBalance() const {return balance;} // declaration + definition
        // business methods
        virtual bool withdraw(double amount)=0; // declaration
        virtual bool deposit(double amount)=0; // declaration
        virtual ~Account() {
            cout << "Account::~Account()" << endl;
        }
    };
} // banking

#endif //DCL113_2025_AUG_18_ACCOUNT_H