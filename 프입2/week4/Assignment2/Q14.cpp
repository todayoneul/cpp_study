#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int arr1[10];
    int cnt = 0;
    int arr2[10];
    for(auto& i : arr1){
        i = cnt;
        cnt++;
    }
    for (auto j : arr1){
        cout << j <<" ";
    }
    cout << endl;

    cnt =0;
    for(auto& l : arr2){
        l = arr1[cnt];
        cnt++;
    }
    for(auto elements : arr2){
        cout << elements << " ";
    }

    cout << endl;

    vector<int>nums(10,0);
    vector<int>nums2(10);
    cnt = 0;
    for (auto& ele : nums){
        ele = cnt;
        cnt++;
    }
    for (auto k : nums){
        cout << k << " ";
    }
    cout << endl;
    cnt =0;
    for (auto& ele : nums2){
        ele = nums[cnt];
        ++cnt;
    }
        for (auto k : nums2){
        cout << k << " ";
    }
}