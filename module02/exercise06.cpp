#include <iostream>
using namespace std;

int main() {
    double a[5]{10, 20, 30, 40, 50};
    double &first = a[0];
    double &last = a[4];

    cout << hex << a << endl; // 0x70731ff660
    cout << hex << &first << endl; // 0x70731ff660
    cout << hex << a + 4 << endl; // 0x70731ff680
    cout << hex << &last << endl; // 0x70731ff680
    first++;
    a[0]++;
    cout << dec << a[0] << endl; // 12
    cout << dec << first << endl; // 12
    a[4]++;
    last++;
    cout << dec << a[4] << endl; // 52
    cout << dec << last << endl; // 52
    return 0;
}
