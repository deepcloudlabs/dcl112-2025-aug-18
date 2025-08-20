#ifndef DCL113_2025_AUG_18_ACCOUNT_H
#define DCL113_2025_AUG_18_ACCOUNT_H
#include <string>

using namespace std;

namespace banking {
    class account { // domain class
        // information hiding
        // attributes/state/data: iban, balance
    private: // default permission
        string iban;
        double balance;
    public:
        // methods
        // constructor
        account(string iban, double balance=0.0); // declaration
        // getter methods
        inline string get_iban() const { // declaration + definition
            return iban;
        }
        inline double get_balance() const {return balance;} // declaration + definition
        // business methods
        double withdraw(const double amount); // declaration
        double deposit(const double amount); // declaration
    };
} // banking

#endif //DCL113_2025_AUG_18_ACCOUNT_H