#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

#include "employee.h"

using namespace std;

int main() {
    vector<employee> employees1{
        {"james", "sawyer", employee::department_t::it, employee::gender_t::male, 250'000, "tr100", 1982},
        {"kate", "austen", employee::department_t::sales, employee::gender_t::female, 350'000, "tr200", 1986},
        {"juliet", "burke", employee::department_t::finance, employee::gender_t::female, 550'000, "tr300", 1983},
        {"jack", "shephard", employee::department_t::hr, employee::gender_t::male, 450'000, "tr400", 1973},
        {"jack", "bauer", employee::department_t::it, employee::gender_t::male, 150'000, "tr500", 1956}
    };
    vector<employee> employees2{
        {"emily", "stone", employee::department_t::hr, employee::gender_t::female, 200'000, "tr501", 2002},
        {"liam", "clark", employee::department_t::sales, employee::gender_t::male, 180'000, "tr502", 1992},
        {"nora", "wright", employee::department_t::finance, employee::gender_t::female, 220'000, "tr503", 1980},
        {"oliver", "hall", employee::department_t::marketing, employee::gender_t::male, 190'000, "tr504", 1988},
        {"mia", "turner", employee::department_t::it, employee::gender_t::female, 310'000, "tr505", 1990}
    };

    vector<employee> employees3{
        {"emily", "stone", employee::department_t::hr, employee::gender_t::female, 200'000, "tr501", 2002},
        {"liam", "clark", employee::department_t::sales, employee::gender_t::male, 180'000, "tr502", 1992},
        {"mia", "turner", employee::department_t::it, employee::gender_t::female, 310'000, "tr505", 1990},
        {"oliver", "hall", employee::department_t::marketing, employee::gender_t::male, 190'000, "tr504", 1988},
        {"nora", "wright", employee::department_t::finance, employee::gender_t::female, 220'000, "tr503", 1980}
    };

    cout << equal(employees1.begin(), employees1.end(), employees2.begin()) << endl;
    cout << equal(employees2.begin(), employees2.end(), employees3.begin()) << endl;
    cout << ranges::is_permutation(employees2, employees3) << endl;
    return 0;
}
