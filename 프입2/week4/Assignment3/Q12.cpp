#include <iostream>
#include<vector>
using namespace std;

int main(){
    int input;
    vector<int> vec;
    while ((cin >> input))
    {
        vec.push_back(input);
    }
    for(auto& ele : vec){
        if(ele % 2 == 1){
            ele *=2;
        }
    }
    for(const int &ele : vec){
        cout << ele << " ";
    }
}