#include <iostream>
#include <vector>

class temp{
public:
    int a;
    temp(){};
    temp(int i ) : a(i) {};

};

int main(){
    std:: vector<temp>v;
    temp t;
    v.push_back(t); // statement 1
    v.emplace_back(2); // statement 2
    for(auto i : v){
        std::cout << i.a << std::endl;
    }
    return 0;
}