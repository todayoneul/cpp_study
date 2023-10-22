#include <iostream>
#include <vector>
using namespace std;

int main(){
    // int arr[3][2] = {1,2,3,4};
    // for(auto a : arr){}
    //     cout << a[0];
    //     cout << a[1] << endl;
    // for문의 중괄호 유무

    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    auto it = vec.begin();
    for( ; it != vec.end();++it);
    cout << *it;
    return 0;
    
    int arr[20] = {1,2,3,4,5,6,7,8,9,10};
    cout << arr[20];
    return 0;

    int arr1[] = {10,20,30,40,50};
    int*ptr = &arr1[2];
    cout << *ptr +3 << " " << *(ptr +3);
    return 0;
}