#include <time.h>
#include <iostream>
#include <vector>
#include <list>
#include <random>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;
std::default_random_engine random_engine(time(nullptr));
std::uniform_int_distribution <unsigned int> rand_dis(0,10);//randomDistance를 위해 추가해줌
std::uniform_int_distribution<unsigned int> ability_range(0, 100);
std::uniform_real_distribution<float> possibility(0.f, 1.f);

int main(){
    vector<int> ivec= {1,2,3,4,5,6,7,8,9,10};
    vector<int> ivec2 = {1,2,3,4,5,6,7,8,9,10};
    int val =100;

    int sum = accumulate(ivec.begin(),ivec.end(),0); // accumulate - 합(범위, sum 시작 값)
    cout<< sum << endl;

    auto result = find(ivec.cbegin(), ivec.cend(), val);
    cout << *result << endl;

    cout << equal(ivec.begin(), ivec.end(),ivec2.begin()) << endl;

    fill(ivec2.begin(), ivec2.end(), 0);
    fill_n(ivec2.begin(),ivec2.size(), 10);
    for(auto i : ivec2){
        cout << i << " ";
    }
    cout<<endl;

    auto it = back_inserter(ivec2);
    *it =42;
    for(auto i : ivec2){
    cout << i << " ";
    }
    cout<< endl;

    int a1[] ={0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(*a1)];
    auto ret = copy(begin(a1),end(a1),a2);
    for(auto i : a2){
        cout << i << " ";
    }
    cout << endl;

    //end_unique의 사용
    vector<string> svec = {"bbbb" , "ccc", "cccccc", "ddd","aaa","ddd","bbb"};
    vector<string> svec2 = {"bbbb" , "ccc", "cccccc", "ddd","aaa","ddd","bbb"};
    // sort(svec.begin(),svec.end());
    // auto end_unique = unique(svec.begin(),svec.end());
    // svec.erase(end_unique,svec.end());
    // for(auto i : svec){
    //     cout<< i << " ";
    // }
    // cout << endl;

    //lambda!!!!!!! sort with 3 parameter

    sort(svec.begin(), svec.end(), [](string s1, string s2){return s1.size() > s2.size();}); // 3번째 paramter를 통해 sorting 매커니즘 결정 가능
    for(auto i : svec){
        cout << i << " ";
    }
    cout<<endl;

    int sz = 3;
    auto wc = find_if(svec2.begin(), svec2.end(),[sz](const string &a){return a.size()>sz;});
    cout << *wc << endl;
    //[] lambda식에서 [=] -> capture by value, [&] -> capture by reference

    
}

