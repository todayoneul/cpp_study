#include <iostream>

using namespace std;

int main(){
    int arr1[3]={1,2,3};
    int* p1 = arr1;
    int* p2 = arr1;
    p1 += p2 -p1;
    cout << *p1 << endl;
}