#include <iostream>

using namespace std;
// 1. default constructor
// 2. copy constructor
// 3. assignment operator
// 4. destructor
class A {
    int *data;
    public:
    A() { // default constructor
        cout << "A()" << endl;
        data = new int(1);
    }
    explicit A(int data) { // default constructor
        cout << "A("<< data << ")" << endl;
        this->data = new int(data);
    }
    /*
    A(const A&other) { // copy constructor
        cout << "A(const A&other)" << endl;
        this->data = new int(*other.data);
    }
    void operator=(A& other) {
        cout << "A::operator==()"<< endl;
        *this->data = *other.data;
    }
    */
    ~A() {
        cout << "~A() is running and deleting the pointer: " << hex << data << endl;
        delete data;
    }
};

int main() {
    A a1; // default constructor
    A a2{2};
    A a3 = a2;
    A a4;
    A a5 ;
    a4 = a3;
    a5 = a4;
    return 0;
}