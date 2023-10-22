#include <iostream>
#include <vector>
using namespace std;

void rec_printvec(vector<int>::iterator it, vector<int>::iterator end){
    if(it != end){
        cout << *it << " ";
        rec_printvec(++it,end);
    }
}

int main(){
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};
    rec_printvec(ivec.begin(),ivec.end());
}