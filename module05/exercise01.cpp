#include <iostream>
using namespace std;

int main() {
    int x=42;
    int y = ++x; // pre-increment x<-43, y<-43
    cout << "x: " << x << ", y: " << y << endl; // 43,43
    y = x++; // post-increment // y<-43, x<-44
    cout << "x: " << x << ", y: " << y << endl; // 44,43
    ++x;
    x++;
    return 0;
}
