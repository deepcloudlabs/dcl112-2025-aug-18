#include <algorithm>
#include <iostream>
#include <vector>
#include <ranges>
#include <functional>

using namespace std;

int main() {
    vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    function<bool(int&)> is_even = [](int &u) -> bool {
        cout << "[is_even]: " << u  << endl;
        return u % 2 == 0;
    };
    function<int(int&)> to_cube = [](int &u) -> int {
        cout << "[to_cube]: " << u  << endl;
        return u*u*u;
    };
    // solution: stl -> ranges -> lazy
    auto output =
        numbers | ranges::views::filter(is_even)
                | ranges::views::transform(to_cube);
    auto toplam = ranges::fold_left(output, int(), [](int birikec,int n) {return birikec+n;});
    cout << "toplam: " << toplam  << endl;
    // filter    -> filter
    // transform -> map
    // fold_left -> reduce
    // JS:
    // numbers = [1,2,3,4,5,6,7,8,9,10];
    // numbers.filter(n => n%2 === 0).map(u => u ** 3).reduce((x,y)=>x+y,0)
    /* Python:
     * from functools import reduce
     * numbers = [1,2,3,4,5,6,7,8,9,10]
     * reduce(lambda birikec,u: birikec+u,map(lambda u : u ** 3,filter(lambda n: n%2 == 0, numbers)))
    */
    /* Java:
     * var numbers = List.of(1,2,3,4,5,6,7,8,9,10);
     * numbers.stream().filter(n -> n%2 == 0)
     *                 .map(n -> n*n*n)
     *                 .reduce(0,(birikec,u)->birikec+u);
     * /
    return 0;
}