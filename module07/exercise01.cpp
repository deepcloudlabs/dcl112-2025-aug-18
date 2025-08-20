#include <iostream>
using namespace std;

class A {};
class B : public A {};
class C : public B {};
class D : public B {
    public:
    int fun() { return 42;}
};

int main() {
    A *p = new A{};
    A *q = new B{};
    A *r = new C{};
    A *u = new D();

    B *s = new B{};
    B *t = new C{};
    B* ut = new D();

    C *w = new C{};

    D *d = static_cast<D*>(q);
    // static bind
    cout << d->fun() << endl;

    delete p;
    delete q;
    delete r;
    return 0;
}