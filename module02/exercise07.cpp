#include <iostream>
using namespace std;

// call-by-pointer
void swap_cbp(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call-by-value: does not work!
void swap_cbv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
// call-by-reference: looks like cbv runs like cbp!
void swap_cbr(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x=3, y=5;
    cout << dec << "x=" << x << ", y=" << y << endl; // 0x70731ff660
    swap_cbr(x, y);
    cout << dec << "x=" << x << ", y=" << y << endl; // 0x70731ff660
    return 0;
}