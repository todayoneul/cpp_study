#include <iostream>
#include <string>
using namespace std;

int main(){
    string in1;
    string merge;
    while (cin >> in1)
    {
        if(!merge.empty()){
            merge += " ";
        }
        merge += in1;
    }
    
    cout << merge << endl;
}
