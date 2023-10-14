#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int input;
    vector<int> ivec;
    vector<int> sumlist1;
    vector<int> sumlist2;
    while(cin >> input){
        ivec.push_back(input);
    }
    for(int i =0; i!=ivec.size(); i++){
        for(int j=i+1; j <ivec.size(); j++){
            sumlist1.push_back(ivec[i]+ivec[j]);
        }
    }
    for(auto k : sumlist1){
        cout << k << " ";
    }
    cout << endl;

    for(int i =0; i<ivec.size()/2; i++){
        sumlist2.push_back(ivec[i]+ivec[ivec.size()-i-1]);
    }
    for(auto l : sumlist2){
        cout << l << " ";
    }
    cout << endl;
}