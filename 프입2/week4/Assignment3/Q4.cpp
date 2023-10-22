#include <iostream>
using namespace std;

int main(){
    int input;
    while (cin >> input)
    {
        if(input == 42){
            break;
        }
        else{
            continue;
        }
    }
}