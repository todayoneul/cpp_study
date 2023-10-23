#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<int> f_ilist = {1,2,3,4,5,6,7,8,9,10};
    auto prev= f_ilist.before_begin();
    auto curr = f_ilist.begin();
    while (curr != f_ilist.end())
    {
        if(*curr %2){
            curr = f_ilist.erase_after(prev);
        }else{
            prev = curr;
            curr++;
        }
    }
    
    for(auto i : f_ilist){
        cout << i << " ";
    }
}