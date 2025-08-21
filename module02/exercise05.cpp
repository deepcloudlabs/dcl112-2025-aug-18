#include <iostream>
using namespace std;

int main() {
    int n = 1; // 0xf0afffc34
    int &nn = n; // 0xf0afffc34
    int nnn = n; // 0xf0afffc30
    cout << hex << &n << endl;
    cout << hex << &nn << endl;
    cout << hex << &nnn << endl;
    n++;
    cout << dec << n << endl; // 2
    cout << dec << nn << endl; // 2
    cout << dec << nnn << endl; // 1
    return 0;
}
