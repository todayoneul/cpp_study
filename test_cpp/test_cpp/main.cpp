#include <time.h>
#include <iostream>
#include <vector>
#include <list>
#include <random>

std::default_random_engine random_engine(time(nullptr));
std::uniform_int_distribution <unsigned int> rand_dis(0,10);//randomDistance를 위해 추가해줌
std::uniform_int_distribution<unsigned int> ability_range(0, 100);
std::uniform_real_distribution<float> possibility(0.f, 1.f);

int main(){
    int a=400;
    int temp =1;

    while (temp != a)
    {
        float p = possibility(random_engine);
        temp++;
        std::cout << p << std::endl;
    }

    std::vector<int> ivec(10,1);
    std::list<int> ilist = {1,2,3,4,5,6,7,8,9,10};
    std::cout << ivec.back() << std::endl;
    std::cout << ilist.back() << std::endl;
}

