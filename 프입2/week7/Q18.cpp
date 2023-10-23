#include <iostream>
#include <list>
using namespace std;

int main(){
    vector<string> lst;
    auto iter = lst.begin();
    string word;
    while ((cin >> word))
    {
        iter = lst.insert(iter,word);
    }
    for(auto i : lst){
        cout << i << " ";
    }
}