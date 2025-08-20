#include "Bank.h"
using namespace banking;

#ifndef _CUSTOMERREPORT_H
#define	_CUSTOMERREPORT_H
class CustomerReport {
private:
    Bank *bank;
public:
    CustomerReport() {
    }
    
    Bank* getBank() {
        return bank;
    }
    
    void setBank(Bank *bank) {
        this->bank = bank;
    }
    
    void generateReport() const ;
};
#endif	/* _CUSTOMERREPORT_H */

