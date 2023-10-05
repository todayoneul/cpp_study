#include <iostream>
using namespace std;

int GCD_Recursion(int, int);
int GCD_loop(int, int);

int main(){
    int a, b;
    cout<< "input for GCD_Recursion: ";
    cin >> a >> b;
    cout << GCD_Recursion(a,b) << endl;
    cout << "input for GCD_loop: ";
    cin >> a >> b;
    cout << GCD_loop(a,b) << endl;
}

int GCD_Recursion(int a, int b){
    if (a%b == 0){
        return b;
    }else{
        return GCD_Recursion(b,a%b);
    }
}
int GCD_loop(int a, int b){
    while(b!=0){
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}