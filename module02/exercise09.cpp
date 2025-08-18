#include <iostream>
using namespace std;

const int &max(const int arr[], const int length) {
    // stateless -> stateful -> not thread-safe!
    static int max_index = 0; // stack -> data
    for (int i = 0; i < length; i++) {
        if (arr[i] >= arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}


int main() {
    int numbers[]{4, 8, 42, 16, 15, 23};
    cout << max(numbers, 5) << endl;
    return 0;
}
