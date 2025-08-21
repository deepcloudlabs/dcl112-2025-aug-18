#include <cstring>
#include <iostream>
using namespace std;

struct employee {
    char fullname[60]; // 60-B
    double salary; // 8-B
    // 4-B padding
};

// read-only
void print_employee(const employee &emp) {
    // call by reference
    cout << hex << &emp << endl;
    cout << "{ fullname: " << emp.fullname
            << ", salary: " << emp.salary
            << " }" << endl;
    // error: emp.salary *= 2;
    cout << sizeof(employee) << endl;
}

int main() {
    employee jack{};
    strcpy(jack.fullname, "Jack Bauer");
    jack.salary = 4500.00;
    cout << hex << &jack << endl;
    print_employee(jack);
    return 0;
}
