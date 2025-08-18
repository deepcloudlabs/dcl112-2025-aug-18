#include <iostream>
using namespace std;

template <typename T=double, int VAL=10>
T add_val(T x){
    return x + VAL ;
}

template <typename T>
T add_val(T x, int VAL){
    return x + VAL ;
}


int main() {
    double y=42.0;
    double z = add_val<double,108>(y); // 1, first add_val: T=double, VAL=108
    cout << "z: " << z << endl;
    double w = add_val<double,42>(y); // 2, first add_val: T=double, VAL=42
    cout << "w: " << w << endl;
    double m= add_val(y,4); // 1, second add_val:
    cout << "m: " << m << endl;
    double x = add_val(y); // 3, first add_val: T=double, VAL=10
    cout << "x: " << x << endl;
    x = add_val<double,108>(y); // binds to (1)
    return 0;
}
