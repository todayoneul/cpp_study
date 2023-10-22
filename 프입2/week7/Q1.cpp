#include <iostream>
using namespace std;

istream& func(istream& is){
    string s;
    while (getline(is,s))
    {
        cout << s << " ";
    }
    return is;
}

int main(){
    func(cin);
}