#include <iostream>
using namespace std;

int main() {
    int *p = new int[]{4,8,15,16,23,42}; // kernel virtual memory -> physical memory
    for (int* q=p;q <= p+6;++q) {
        cout << *q << endl;
    }
    delete [] p;
    return 0;
}
