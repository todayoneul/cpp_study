#include <iostream>
#include <vector>

using namespace std;

int main(){
    string input;
    vector<int> ivec;
    vector<string>svec;
    while(cin >> input){
        svec.push_back(input);
    }
    cout << endl;
    for (auto i : svec){
        cout << i << endl;
    }
}