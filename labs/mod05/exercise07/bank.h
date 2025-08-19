#ifndef DCL113_2025_AUG_18_BANK_H
#define DCL113_2025_AUG_18_BANK_H
#include "customer.h"
#include <string>
using namespace std;

namespace banking {
    class Bank {
        Customer **customers;
        int numberOfCustomers;

    public:
        Bank() : customers(nullptr), numberOfCustomers(0) {
        }

        ~Bank();

        Bank(const Bank &b) = delete;

        Bank &operator=(const Bank &b) = delete;

        Customer *addCustomer(string firstName, string lastName);

        [[nodiscard]] int getNumberOfCustomers() const {
            return this->numberOfCustomers;
        }

        [[nodiscard]] Customer *getCustomer(int index) const;
    };
}
#endif //DCL113_2025_AUG_18_BANK_H
