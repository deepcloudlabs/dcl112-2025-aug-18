#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers{
        8, 4, 42, 23, 16, 15
    };
    auto print_number = [](int number) {
        std::cout << number << "," ;
    };
    auto descending_order = [](int u,int v) {
        return v < u;
    };
    std::ranges::for_each(numbers, print_number);
    std::cout << std::endl;
    std::ranges::sort(numbers,descending_order);
    std::ranges::for_each(numbers, print_number);
    std::cout << std::endl;
    auto numberOfOddNumbers = std::ranges::count_if(numbers,[](int n){return n%2 == 1;});
    std::cout << numberOfOddNumbers << std::endl;
    return 0;
}
