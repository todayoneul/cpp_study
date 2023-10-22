#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> ivec1 = {1,2,3,4,5,6};
    vector<int> ivec2 = {1,2,3,4,5,6,7,8,9};
    // bool check=true;
    int count=  0;

    // if(ivec1[0] == ivec2[0]){
    //     for(int i = 0 ; i < ivec1.size(); i++){
    //         if(ivec1[i] != ivec2[i]){
    //             check = false;
    //         }
    //     }
    // }else{
    //     check = false;
    // }
    // cout << check << endl;

    if(ivec1[0] == ivec2[0]){
        for(int i =0 ; i < ivec1.size(); i++){
            if(ivec1[i] == ivec2[i]){
                count +=1;
            }
            else{
                break;
            }
        }
    }
    cout << count << endl;
}   