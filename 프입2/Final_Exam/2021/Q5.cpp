#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    v.reserve(10);

    v = {0,1,2,3,4,5,6,7,8,9};
    auto it = v.end() -1;
    // std::cout<<*it << std::endl; //9
    std::cout << v.capacity() << " ";

    v.push_back(10);
    std::cout<<*it;
    return 0;
    }