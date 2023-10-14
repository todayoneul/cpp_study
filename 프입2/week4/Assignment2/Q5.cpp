#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> ivec;
    // vector<string> svec = ivec; -> illegal
    vector<string> svec(10,"null");
}