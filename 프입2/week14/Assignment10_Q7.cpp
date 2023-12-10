#include <iostream>
//function object class
// 첫번째 parameter를 만족하면, 두번째 parameter를, 아니면 세번째 parameter 반환
class if_else{
public:
    std::string operator() (bool test, std::string s1, std::string s2) const {
        return test ? s1 : s2;
    }
};

int main(){
    if_else ifElse;
    std::string t = "True";
    std::string f = "False";
    std::string result1= ifElse(100/3 == 33 , t , f);
    std::string result2 = ifElse(100/3 == 30, t , f);
    std::cout << result1 << std:: endl;
    std::cout << result2 << std:: endl;
}

