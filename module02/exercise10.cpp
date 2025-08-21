#include <iostream>
using namespace std;

int main() {
    int x = 42;
    cout << x << endl;
    x++;
    cout << x << endl;
    cout << "Address of x: " << &x << endl;
    int *p = nullptr;
    cout << "Address of p: " << hex << &p << endl;
    cout << "p holds the address: " << hex << p << endl;
    p = &x;
    cout << "p holds the address: " << hex << p << endl;
    cout << "p holds the value: " << dec << *p << endl;
    (*p)++;
    cout << "x holds the value: " << x << endl;
    p = new int(108); // heap
    cout << "p holds the address: " << hex << p << endl;
    cout << "p holds the value: " << dec << *p << endl;
    delete p;
    return 0;
}
