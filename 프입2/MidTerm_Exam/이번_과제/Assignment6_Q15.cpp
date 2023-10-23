#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> ivec1(5,1);
    vector<int> ivec2(5,1);
    list<int> ilist(5,1);

    //2개의 vector를 비교
    if(ivec1 == ivec2){
        cout << "same" << endl; 
    }else{
        cout << "diff" << endl;
    }

    //vector 와 list를 비교

    //2개의 크기가 다르면 바로 diff 출럭
    if(ivec1.size()!= ilist.size()){
        cout << "diff"<<endl;
    } //크기가 같다면 vector와 list의 맨 뒤의 원소끼리 차례로 비교해가면서 두개의 원소가 다르면 diff출력 , 같다면 맨 뒤원소를 pop시켜 다시 비교
    else{
        const int j =ivec1.size();
        for(int i=0; i < j; i++){
            if(ivec1.back() != ilist.back()){
                cout << ivec1.back()<< ilist.back() <<  "diff" << endl;
                break;
            }
            // 크기가 1이 되고, 그 원소가 서로 같아면 same출력
            if(ivec1.size() == 1 && ivec1[0] == ilist.front()){
                cout << "same" << endl;
                break;
            }
            ivec1.pop_back();
            ilist.pop_back();
        }
    }
    
}