#include <iostream>
using namespace std;
#define sq(x) ((x)*(x))
inline int square(int x) { return x * x; }

int main() {
    int x = 3;
    double y = 5.3;
    cout << sq(x+y) << endl;
    cout << square(x + y) << endl;
    cout << (x + y) * (x + y) << endl;
    return 0;
}
