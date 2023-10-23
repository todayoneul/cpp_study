#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main(){
    string in;
    deque<string> sdq;
    list<string> slist;
    while(cin >> in){
        slist.push_back(in);
    }
    for(auto it = slist.begin() ; it!= slist.end() ; it++){
        cout << *it << " ";
    }
}