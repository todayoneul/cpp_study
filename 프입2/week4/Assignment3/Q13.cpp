#include <iostream>
using namespace std;

int main(){
    string s = "word";
    string p1 = s + (s[s.size()-1]== 's' ? "" : "s");
    cout << p1;
}