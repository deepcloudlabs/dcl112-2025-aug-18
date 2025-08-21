#include <iostream>
using namespace std;

int main() {
    int n = 1; // 0x99dddffc5c
    int nn = n; // 0x99dddffc58
    int nnn = n; // 0x99dddffc54
    cout << hex << &n << endl;
    cout << hex << &nn << endl;
    cout << hex << &nnn << endl;
    n++;
    cout << dec << n << endl; // 2
    cout << dec << nn << endl; // 1
    cout << dec << nnn << endl; // 1
    return 0;
}
