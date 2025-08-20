#include <iostream>

using namespace std;

class A {
protected:
    int a_data;

public:
    explicit A(const int a_data) : a_data{a_data} {
        cout << "A's constructor:" << a_data  << endl;
    }

    ~A() {
        cout << "A's destructor..." << endl;
    }
};

class B : public A {
protected:
    int b_data;

public:
    explicit B(const int a_data, const int b_data) : A{a_data}, b_data(b_data) {
        cout << "B's constructor:" << b_data  << endl;
    }

    ~B() {
        cout << "B's destructor..." << endl;
    }
};

class C : public B {
protected:
    int c_data;
public:
    explicit C(const int a_data, const int b_data,const int c_data)
    : B{a_data,b_data}, c_data(c_data)
    {
        cout << "C's constructor:" << c_data << endl;
    }

    ~C() {
        cout << "C's destructor..." << endl;
    }
};

class D : public C {
protected:
    int d_data;
public:
    D(const int a_data, const int b_data,const int c_data,const int d_data)
        : C{a_data,b_data,c_data}, d_data(d_data)
    {
        cout << "D's constructor:" << d_data  << endl;
    }

    ~D() {
        cout << "D's destructor..." << endl;
    }
};

// D -> C -> B -> A
int main() {
    cout << "Application is just started..." << endl;
    const auto p = new D{1,2,3,4};
    delete p;
    cout << "Application is just completed..." << endl;
    return 0;
}
