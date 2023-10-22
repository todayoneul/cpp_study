#include <iostream>
#include <istream>
#include <sstream>

using namespace std;

istream& func(istream& is){
    string line;
    string output;
    while (getline(cin,line))
    {
        istringstream record(line);

        while(record >> output){
            cout << output << " "; 
        }
        cout << endl;
    }
    return is;
}

int main(){
    func(cin);
}