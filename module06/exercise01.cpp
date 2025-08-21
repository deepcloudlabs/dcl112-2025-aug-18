#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "A's constructor..." << endl;
    }

    ~A() {
        cout << "A's destructor..." << endl;
    }
};

class B : public A {
public:
    B() : A() {
        cout << "B's constructor..." << endl;
    }

    ~B() {
        cout << "B's destructor..." << endl;
    }
};

class C : public B {
public:
    C() : B() {
        cout << "C's constructor..." << endl;
    }

    ~C() {
        cout << "C's destructor..." << endl;
    }
};

class D : public C {
public:
    D() : C() {
        cout << "D's constructor..." << endl;
    }

    ~D() {
        cout << "D's destructor..." << endl;
    }
};

// D -> C -> B -> A
int main() {
    cout << "Application is just started..." << endl;
    D *p = new D();
    delete p;
    cout << "Application is just completed..." << endl;
    return 0;
}
