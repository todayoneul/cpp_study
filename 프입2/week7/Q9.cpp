#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator find_it(vector<int>::iterator a,vector<int>::iterator b, int val){
    for(;a!=b;a++){
        if(*a == val){
            return a;
        }
    }
    return b;
}

int main(){
    vector<int> ivec = {1,2,3,4,5};
    cout <<find_it(ivec.begin(),ivec.end(),6)-ivec.begin() << endl;
}