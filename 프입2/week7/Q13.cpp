#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> ivec = {1,2,3,4,5};
    list<int> ilist = {1,2,3,4,5,6,7};
    vector<double> dvec(ivec.begin(),ivec.end());
    for(auto i : dvec){
        cout<< i << " ";
    }
    cout << endl;
    vector<double> dvec2(ilist.begin(),ilist.end());
    for(auto i : dvec2){
        cout<< i << " ";
    }
}