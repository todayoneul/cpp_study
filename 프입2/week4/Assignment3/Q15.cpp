#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec = {1,2,3,4,5,6,7};
    vector<int> :: size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt){
        ivec[ix] = cnt;
        cout << ix << endl;
        cout << ivec[ix]<< " ";
    }
    for(auto ele : ivec){
        cout << ele << " ";
    }
}