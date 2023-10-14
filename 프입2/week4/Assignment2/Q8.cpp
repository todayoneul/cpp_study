#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> svec;
    string input;
    while(cin >> input){
        svec.push_back(input);
    }
    int cnt = 0;
    for(string &i : svec){
        for(char &j : i){
            j = toupper(j);
        }
        if(cnt % 9 == 0){
            cout << endl;
        }
        cout << i << " ";
        cnt +=1;
    }
}
    
