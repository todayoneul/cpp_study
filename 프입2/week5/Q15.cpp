#include <iostream>
using namespace std;

void print(const int* ia, size_t size) {
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }
}

int main() {
    const int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(ia, 10); // Pass the array and its size
}
