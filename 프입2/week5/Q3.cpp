#include <iostream>
using namespace std;

int fact(unsigned int n){
    if(n>1){
        return n * fact(n-1);
    }else{
        return 1;
    }
}

int main(){
    int input;

    cin >> input;

    cout << fact(input)<< endl;
}