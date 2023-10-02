#include <iostream>
using namespace std;
int arrayDiff(int arr1[],int arr2[],int size);

int main(){
// 각각의 배열은 5개의 원소를 가진다고 가정
    int size = 5;
    int arr1[size];
    int arr2[size];
    // 배열(arr1,arr2)의 원소를 각각 입력받음
    for (int i=0; i<5; i++){
        int j;
        cin >> j; 
        arr1[i] = j;
    }
    for (int i=0; i<5; i++){
        int j;
        cin >> j; 
        arr2[i] = j;
    }
    //출력
    if (arrayDiff(arr1,arr2,size))
        cout << "Same Array" << endl;
    else
        cout << "Different Array" << endl;
}

int arrayDiff(int arr1[],int arr2[],int size){
    for(int i=0; i<size; i++ ){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}