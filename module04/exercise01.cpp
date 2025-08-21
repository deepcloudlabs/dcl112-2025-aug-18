#include <iostream>

using namespace std;

class A {
    int data;

public:
    A() : data(0) {
        // default constructor
        cout << "A()" << endl;
    }

    explicit A(int data) : data(data) {
        // default constructor
        cout << "A(" << data << ")" << endl;
    }

    A(const A &other) : data(data) {
        // copy constructor
        cout << "A(const A&other)" << endl;
        this->data = other.data;
    }

    const A& operator=(const A &other) const {
        cout << "A::operator==()" << endl;
        return other;
    }

    ~A() {
        cout << "~A()" << endl;
    }
};

int main() {
    A a1; // default constructor
    A a2 = a1; // Copy Constructor: A(const A&other)
    A a3{42}; // A(int)
    A a4{108}; // error: A(int): int -> A
    A a5; // default constructor
    a5 = a2; // operator overloading: = (assignment operator)
    A array[10]{{}, {}, a3, A{42}, a2, A{}};
    A *p = new A{10}; // A(int)
    A *q = new A; // default constructor
    delete q; // destructor
    delete p; // destructor
}
