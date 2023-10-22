#include <iostream>
#include <vector>
using namespace std;

int val = 100;
int func(){
    return ++val;
}

void swap(int a,int b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    // int a = 10;
    // int b = 20;
    // int* p1, p2;
    // p1 = &a;
    // //p2 = &b;
    // cout << *p1 << " "; //*p2;
    // return 0;

    // int a =0;
    // int *p1 =nullptr;
    // //int *p2 = a;

    // decltype(func()) temp =200;
    // cout << val;
    // return 0;

    // string str = "abcdefg";
    // for(auto ch : str){
    //     ++ch;
    // }
    // cout << str;
    // return 0;

    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // cout << arr[10];
    // return 0;

    // vector<int> vec = {1,2,3,4};
    // vector<int>::iterator it = vec.end();
    // cout << *it;

    // vector<int> vec = {1,2,3,4};
    // vector<int>::iterator it = vec.begin();
    // (*it)++;
    // it ++ ;
    // *(it++);
    // cout << (*it)++;

    // int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
    // auto p = arr;
    // for(;**p;++p)
    //     cout << **p << " ";

    // unsigned char a =1;
    // unsigned char b =2;
    // if(a%b)
    //     cout << "true";
    // else
    //     cout << "false";
    
    int num1 = 100;
    int num2 = 200;
    swap(num1,num2);
    cout << num1 << " " << num2;
    

}
