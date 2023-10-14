#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    string output;

    getline(cin,input);
    for(auto i : input){
        if (!ispunct(i)){
            output += i;
        }
    }
    cout << output << endl;
}