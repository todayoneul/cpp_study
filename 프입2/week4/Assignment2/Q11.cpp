#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    for(auto it = ivec.begin(); it < ivec.end(); it++){
        *it *= 2;
    }
    for (auto j : ivec){
        cout << j << " ";
    }
    cout << endl;

}