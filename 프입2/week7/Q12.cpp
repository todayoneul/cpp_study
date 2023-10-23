#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> destination(source);  // Creates a new vector by copying the elements from the 'source' vector.
    for(auto i : destination){
        cout << i << " ";
    }
    cout << endl;
    vector<int> source2 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> destination2(source2.begin() + 2, source2.begin() + 5);  // Creates a new vector with elements {3, 4, 5}.
    for(auto i : destination2){
        cout << i << " ";
    }
}