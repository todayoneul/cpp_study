#include <iostream>
#include <vector>
using namespace std;
int vecDiff(const vector<int>&vec1,const vector<int>& vec2);

int main(){
    vector<int> vec1;
    vector<int> vec2;

    //크기를 다르게 하여 비교할 수 있음
    // vec1 = {1,2,3,4,5};
    // vec2 = {1,2,3,4};

    // 백터(vec1,vec2)의 원소를 각각 입력받음
    for(int i=0; i<5; ++i){
        int j;
        cin >> j;
        vec1.push_back(j);
    }
    for(int i=0; i<5; ++i){
        int j;
        cin >> j;
        vec2.push_back(j);
    }
    //출력
    if (vecDiff(vec1,vec2))
        cout << "Same Vector" << endl;
    else
        cout << "Different Vector" << endl;
}

int vecDiff(const vector<int>& vec1,const vector<int>& vec2){
    if(vec1.size() != vec2.size())
        return false;
    for (int i =0; i<vec1.size(); i++){
        if(vec1[i] != vec2[i])
            return false;
    }
    return true;
}