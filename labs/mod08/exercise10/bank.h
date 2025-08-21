#ifndef DCL113_2025_AUG_18_BANK_H
#define DCL113_2025_AUG_18_BANK_H
#include "customer.h"
#include <string>
using namespace std;

namespace banking {
    class Bank {
        // domain class
        static vector<Customer *> customers;

        Bank() = default;

    public:
        ~Bank() = delete;

        Bank(const Bank &b) = delete;

        Bank &operator=(const Bank &b) = delete;

        Bank(Bank &&b) = delete;

        Bank &operator=(Bank &&b) = delete;

        static Customer *addCustomer(string firstName, string lastName);

        [[nodiscard]] static int getNumberOfCustomers() {
            return customers.size();
        }

        [[nodiscard]] static Customer *getCustomer(int index);
        static void shutdown();
    };
}
#endif //DCL113_2025_AUG_18_BANK_H
