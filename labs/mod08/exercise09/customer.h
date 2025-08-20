#ifndef DCL113_2025_AUG_18_CUSTOMER_H
#define DCL113_2025_AUG_18_CUSTOMER_H
#include "account.h"
#include <string>
using namespace std;

namespace banking {
    class Customer {
        // domain class
        string firstName;
        string lastName;
        Account **accounts;
        int numberOfAccounts;

    public:
        Customer(string firstName, string lastName);

        [[nodiscard]] string getFirstName() const;

        [[nodiscard]] string getLastName() const;

        [[nodiscard]] Account *getAccount(int index) const;

        [[nodiscard]] int getNumberOfAccounts() const;

        void addAccount(Account *account);

        ~Customer();
    };
} // banking

#endif //DCL113_2025_AUG_18_CUSTOMER_H
