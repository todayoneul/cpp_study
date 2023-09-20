#include <iostream>
using namespace std;

int add(int a, int b);
void printhello();
void printmyinput(string st);
void notdefined();

int main(){
    int first , second;
    cin >> first >> second;
    cout << add(first,second) <<endl;

    printhello();
    string input;
    cin>>input;
    printmyinput(input);
    // notdefined();
}

int add(int a, int b){
    return a+b;
}
void printhello(){
    cout<< "Hello" << endl;
    
}
void printmyinput(string st){
    cout << st + "!" << endl;
}