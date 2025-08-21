#include <iostream>
using namespace std;

int main() {
    int numbers[]{4, 8, 15, 16, 23, 42}; // Stack
    // int *p = numbers;
    int *p = &numbers[0];
    p++; // & numbers[1]
    *p = 100; // {4,100,15,16,23,42}
    cout << hex << numbers << endl;
    cout << hex << p << endl;
    cout << dec << numbers[0] << endl; // 4
    cout << dec << numbers[1] << endl; // 100
    cout << dec << *p << endl; // 100
    cout << dec << *(p + 0) << endl; // 100
    cout << dec << p[0] << endl; // 100
    cout << dec << p[2] << endl; // 16
    return 0;
}
