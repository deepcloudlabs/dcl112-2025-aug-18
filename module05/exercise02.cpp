#include <iostream>
using namespace std;

class A {
    int data;

public:
    explicit A(int data = 0) : data(data) {
    }

    [[nodiscard]] int getData() const { return data; }

    A operator++() {
        // pre-increment
        ++data;
        return A(data);
    }

    A operator++(int) {
        // post-increment
        const int temp = data;
        data++;
        return A(temp);
    }
};

int main() {
    A x{42};
    A y;
    y = ++x;
    cout << "x: " << x.getData() << ", y: " << y.getData() << endl; // 43,43
    y = x++; // post-increment // y<-43, x<-44
    cout << "x: " << x.getData() << ", y: " << y.getData() << endl; // 44,43
    x++;
    ++x;
    return 0;
}
