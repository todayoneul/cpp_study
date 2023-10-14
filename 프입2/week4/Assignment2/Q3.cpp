#include <iostream>
#include <string>

using namespace std;

int main(){
    string a = "hello";
    for (char &i : a){
        i = 'x';
    }
    cout << a << endl;
}