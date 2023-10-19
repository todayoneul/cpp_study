#include <iostream>
#include <vector>
using namespace std;

int GCD_recursion(int,int);
int GCD_loop(int,int);


int main(){
    int a ,b;
    cin >> a >> b;
    cout << GCD_recursion(a,b) << endl;
    cout << GCD_loop(a,b) << endl;
    
}

int GCD_recursion(int a, int b){
    if(b==0){
        return a;
    }else{
        int temp = a;
        a=b;
        b = temp%b;
        return GCD_recursion(a,b);
    }
}

int GCD_loop(int a, int b){
    while (b!=0)
    {
        int temp = a;
        a=b;
        b = temp%b;
    }
    return a;
}