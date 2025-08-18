#include <iostream>

int main() {
    for (auto i=0;i<100;++i){ // Block  #1
        for (auto j=0;j<100;++j){ // Block  #1

        }
    }
    {
        [[maybe_unused]] auto x = 0.3;
        {
            [[maybe_unused]] auto y = 0.3;
            {
                [[maybe_unused]] auto z = 0.3;

            } // z: end of life/scope
        }// y: end of life/scope
    }// x: end of life/scope
    // std::cout << x << std::endl;
    return 0;
}