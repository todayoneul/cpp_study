#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

int main(){
    list<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if(*iter % 2){
            vi.insert(iter,*iter);
            advance(iter,1);
        }else{
            iter = vi.erase(iter);
        }
    }
    for(auto i : vi){
        cout << i << " ";
    }
}   