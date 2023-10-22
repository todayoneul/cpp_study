#include <iostream>
using namespace std;

void swap_(int &a, int&b){
    int temp = a;
    a =b;
    b = temp;
}

int main(){
    int a = 5;
    int b = 10;
    swap_(a,b);
    cout << a << endl;
    cout << b << endl;
    
}