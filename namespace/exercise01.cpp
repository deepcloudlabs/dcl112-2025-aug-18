#include <iostream>
using namespace std;

namespace F {
    float x = 9;
}
namespace G {
    using namespace F;
    float y = 2.0;
    namespace INNER_G {
        long x = 5L;
        float z = 10.01;
    }
}

int main() {
    using namespace G;
    using namespace G::INNER_G;
    cout << "x = "
        // << G::INNER_G::x << std::endl;
        // << G::x << std::endl;
         << F::x << std::endl;
    cout << "y = "
         << y << std::endl;
    cout << "z = "
         << z << std::endl;
    return 0;
}
