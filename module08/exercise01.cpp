#include <iostream>
using namespace std;

class Square {
protected:
    double edge;

public:
    explicit Square(const double e) : edge(e) {
    }

    virtual double area() const {
        cout << "Square::area()" << endl;
        return (edge * edge);
    }
};

class Cube : public Square {
public:
    explicit Cube(const double e) : Square(e) {
    }

    double area() const {
        cout << "Cube::area()" << endl;
        return (6.0 * edge * edge);
    }
};

int main() {
    cout << sizeof(Square) << endl;
    cout << sizeof(Cube) << endl;
    Square S(2.0);
    Cube C(2.0);
    Square *ptr;
    char c;
    cout << "Square or Cube";
    cin >> c;
    if (c == 's') {
        ptr = &S;
    } else {
        ptr = &C;
    }
    //                     dynamically binding?
    cout << "area is " << ptr->area() << endl;
    return 0;
}
