#ifndef DCL113_2025_AUG_18_CUSTOMER_H
#define DCL113_2025_AUG_18_CUSTOMER_H
#include "account.h"
#include <string>
using namespace std;

namespace banking {
    class Customer {
        string firstName;
        string lastName;
        Account *account;
        public:
        Customer(string firstName, string lastName);
        string getFirstName() const;
        string  getLastName() const;
        Account* getAccount();
        void setAccount(Account* account);
        ~Customer();
    };
} // banking

#endif //DCL113_2025_AUG_18_CUSTOMER_H