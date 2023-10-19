#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> unsorted;
    string input;
    while (cin >> input)
    {
        unsorted.push_back(input);
    }
    for(auto it = unsorted.end()-1; it != unsorted.begin(); it-- ){
        for(auto it1 =unsorted.begin(), it2 = it1+1; it1 != it ; it1 ++ , it2++){
            if(*it1 >*it2){
                string temp = *it1;
                *it1 = *it2;
                *it2 = temp;
            }
        }
    }
    for(const auto& i : unsorted){
        cout << i << " ";
    }
    cout << endl;
}


