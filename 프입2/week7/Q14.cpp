#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(){
    vector<const char*> svec = {"python","java","c++"};
    list<string> clist(svec.begin(),svec.end());
    for(auto i : clist){
        cout << i << " ";
    }
}