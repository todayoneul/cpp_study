#include <iostream>
#include <vector>
#include <list>

int main(){
    std::vector<int> ivec = {1,2,3,4,5,6};
    std::list<int> ilist = {1,2,3,4,5,6,7,8,9,10};
    std::cout<< ivec.back() << std::endl;
    std::cout<< ilist.back() << std::endl;
}