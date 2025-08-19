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
        [[nodiscard]] string getFirstName() const;
        [[nodiscard]] string  getLastName() const;
        [[nodiscard]] Account* getAccount() const;
        void setAccount(Account* account);
        ~Customer();
    };
} // banking

#endif //DCL113_2025_AUG_18_CUSTOMER_H