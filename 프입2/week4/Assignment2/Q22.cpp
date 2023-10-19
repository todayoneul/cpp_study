#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> unsorted;
    int input;
    while (cin >> input)
    {
        unsorted.push_back(input);
    }
    for(auto it = unsorted.end()-1; it != unsorted.begin(); it-- ){
        for(auto it1 =unsorted.begin(), it2 = it1+1; it1 != it ; it1 ++ , it2++){
            if(*it1 >*it2){
                int temp = *it1;
                *it1 = *it2;
                *it2 = temp;
            }
        }
    }
    for(const auto& i : unsorted){
        cout << i << " ";
    }
    cout << endl;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> unsorted;
//     int input;

//     // Input loop
//     cout << "Enter integers (Ctrl+D or non-integer input to end):" << endl;
//     while (cin >> input) {
//         unsorted.push_back(input);
//     }

//     // Bubble Sort using iterators
//     vector<int>::iterator outer, inner1, inner2;
//     for (outer = unsorted.end() - 1; outer != unsorted.begin(); outer--) {
//         for (inner1 = unsorted.begin(), inner2 = inner1 + 1; inner1 != outer; inner1++, inner2++) {
//             if (*inner1 > *inner2) {
//                 // Swap *inner1 and *inner2
//                 int temp = *inner1;
//                 *inner1 = *inner2;
//                 *inner2 = temp;
//             }
//         }
//     }

//     // Output sorted integers
//     cout << "Sorted integers:" << endl;
//     for (const int& num : unsorted) {
//         cout << num << " ";
//     }

//     return 0;
// }

