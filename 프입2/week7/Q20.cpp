#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec;
    list<int> ilist;

    // Copy elements from the array to the vector and the list
    for (int i = 0; i < sizeof(ia) / sizeof(ia[0]); i++) {
        ivec.push_back(ia[i]);
        ilist.push_back(ia[i]);
    }

    // Use iterators to remove odd values from the list
    list<int>::iterator it = ilist.begin();
    while (it != ilist.end()) {
        if (*it % 2 != 0) {
            it = ilist.erase(it);  // Erase the odd value and advance the iterator
        } else {
            ++it;  // Move to the next element
        }
    }

    // Use iterators to remove even values from the vector
    vector<int>::iterator vit = ivec.begin();
    while (vit != ivec.end()) {
        if (*vit % 2 == 0) {
            vit = ivec.erase(vit);  // Erase the even value and advance the iterator
        } else {
            ++vit;  // Move to the next element
        }
    }

    // Print the contents of the vector and the list
    cout << "Vector after removing even values: ";
    for (int value : ivec) {
        cout << value << " ";
    }

    cout << "\nList after removing odd values: ";
    for (int value : ilist) {
        cout << value << " ";
    }

    return 0;
}
