#include <iostream>
#include <vector>

int main(){
    std::vector<int> c1 = {1,2,3,4,5,6,7,8,9,10};
    auto i = c1.begin();
    auto j = c1.end();

    std::cout << *i << " " << *j << std::endl;
}