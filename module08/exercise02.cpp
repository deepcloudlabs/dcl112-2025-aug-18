#include <iostream>
using namespace std;

class A {
    // abstract class
protected:
    int x;

public:
    virtual ~A() = default;

    explicit A(const int x = 0) : x(x) {
    }

    [[nodiscard]] int fun() const { return x; }

    virtual void gun() =0; // pure virtual method -> abstract method
};

class B : public A {
protected:
    int y;

public:
    explicit B(const int x, const int y) : A(x), y(y) {
    }

    [[nodiscard]] virtual int fun() const { return x * y; }

    void gun() override {
    }
};

class C : public B {
    int z;

public:
    explicit C(const int x, const int y, const int z) : B(x, y), z(z) {
    }

    [[nodiscard]] int fun() const override { return x * y * z; }
};

int main() {
    A *p = new B{3, 5};
    cout << p->fun() << endl; // fun: statically bind -> 3
    B *q = new C{3, 5, 7}; //
    cout << q->fun() << endl; // fun: dynamically bind -> 105
    delete p;
    delete q;
    return 0;
}
