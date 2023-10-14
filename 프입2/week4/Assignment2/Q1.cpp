#include <iostream>
using namespace std;

int main(){
    string in1;
    string in2;
    cin >> in1 >> in2;
    if (in1 == in2)
        cout << true << endl;
    else{
        if(in1 >= in2)
            cout << in1<<endl;
        else
            cout << in2<<endl;
    }
    if(in1.length() >= in2.length())
        cout << in1;
    else
        cout << in2;
}