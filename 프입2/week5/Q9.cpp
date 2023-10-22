#include <iostream>
#include <string>
using namespace std;

bool det_captial(string &s){
    for(auto& ch : s){
        if(isupper(ch)){
            return true;
        }
    }
    return false;
}

string lower(string &s){
    for(auto&ch :s){
        ch = tolower(ch);
    }
    return s;
}

int main(){
    string a = "APPLE";
    cout << det_captial(a) << endl;
    cout << lower(a) << endl;

}