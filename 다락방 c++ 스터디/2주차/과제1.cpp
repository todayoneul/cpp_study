#include <iostream>

using namespace std;

void display();
void display(string st);
void display(int n, string st);
void display(float f, string st);

int main(){
    int n;
    float f;
    string st;
    display();
    cin >> st;
    display(st);
    cin >> n >> st;
    display(n,st);
    cin >> f >> st;
    display(f,st);
}
void display(){
    cout << "Hello World!"<< endl;
}
void display(string st){
    cout << st << endl;
}
void display(int n, string st){
    cout << n << ": " << st << endl;
}
void display(float f, string st){
    cout << f << " is " << st << endl;
}