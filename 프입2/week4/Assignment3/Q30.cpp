#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string input;
    vector<string> svec;
    bool repeated = false;
    while (cin >> input)
    {
        for(auto in : svec){
            if(in == input){
                repeated = true;
                break;
            }
        }
        if(repeated)
            break;
        svec.push_back(input);
    }
    if(repeated){
        input[0] = toupper(input[0]);
        cout << input << endl;
    }

    else
        cout << "no word was repeated" << endl;

    
}