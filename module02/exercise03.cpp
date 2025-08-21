#include <iostream>
using namespace std;

int fun(int i = 1, int j = 2, int k = 3) {
    return i + j + k;
}

int main() {
    cout << fun() << endl; // fun(1,2,3)
    cout << fun(42) << endl; // fun(42,2,3)
    cout << fun(42, 108) << endl; // fun(42,108,3)
    cout << fun(42, 108, 549) << endl; // fun(42,108,549)
    return 0;
}
