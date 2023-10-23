#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator iter = iv.begin() , mid = iv.begin() + iv.size()/2;
    int some_val = 5;

    while (iter != mid) {
        if (*iter == some_val) {
            iv.insert(iter, 2 * some_val);
            break; // Move the iterator to the next position
        } else {
            iter++;  // Move the iterator to the next position
        }
    }

    for (auto i : iv) {
        cout << i << " ";
    }

    return 0;
}
