#include <iostream>
#include <string>
using namespace std;

string getName_Prefix_Sufix(string&,string&,string&);
string getName_Prefix_Sufix2(string&,string&,string&);

int main(){
    string name;
    string prefix;
    string suffix;
    cout << getName_Prefix_Sufix(name,prefix,suffix) << endl;
    cout << getName_Prefix_Sufix2(name,prefix,suffix) << endl;
}

string getName_Prefix_Sufix(string &name ,string &prefix,string &suffix){
    cin >> name >> prefix >> suffix;
    string result = name;
    result.insert(result.begin(),prefix.begin(),prefix.end());
    result.append(suffix);

    return result;
}

string getName_Prefix_Sufix2(string &name ,string &prefix,string &suffix){
    cin >> name >> prefix >> suffix;
    string result = name;
    result.insert(0,prefix);
    result.insert(result.length(),suffix);
    return result;
}