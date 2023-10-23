#include<iostream>
#include <list>
#include <deque>

using namespace std;

int main(){
    int in;
    list<int> ilist ={1,2,3,4,5,6,7,8,9,10};
    deque<int> ideque_odd;
    deque<int> ideque_even;
    for(auto it = ilist.begin(); it!=ilist.end();it++){
        if((*it)%2 == 1){
            ideque_odd.push_back(*it);
        }else{
            ideque_even.push_back(*it);
        }
    }
    for(auto i : ideque_odd){
        cout << i << " ";
    }
    cout << endl;
    for(auto i : ideque_even)
    {        
        cout << i << " ";
        }
}