#include <iostream>
#include <vector>
#include <algorithm>

class temp{
public:
    temp(char ch) : ascii(ch){};
    char ascii;

};

int main(){
    std::vector<temp> v = {temp('c'), temp('z' ), temp('A'),temp('Z')};
    sort(v.begin() , v.end(),[](const temp&a,const temp&b){return a.ascii < b.ascii;});
    for(int i =0; i<5; ++i){
        std::cout<<v[i].ascii<<" ";
    }
    return 0;
}