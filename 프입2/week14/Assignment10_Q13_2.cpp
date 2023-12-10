#include <iostream>
#include <vector>
#include <list>

template <typename Iter, typename T>
Iter my_find(Iter begin, Iter end, const T& value) {
    while (begin != end) { 
        if (*begin == value) {
            return begin; 
        }
        ++begin;
    }
    return end; 
}

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5};
    std::list<std::string> slist = {"python", "java", "kotlin", "swift" , "c++" , "PHP"};

    int searching_int = 7;
    auto intResult = my_find(ivec.begin(), ivec.end(), searching_int);
    if(intResult != ivec.end()){
        std::cout << "Int " << searching_int << " found, position: " << std::distance(ivec.begin(), intResult) << std::endl;
    } else{
        std::cout << "Int " << searching_int << " not found." << std::endl;
    }

    std::string searching_str = "c++";
    auto stringResult = my_find(slist.begin(), slist.end(), searching_str);
    if(stringResult != slist.end()){
        std::cout << "String " << searching_str << " found." << std::endl;
    } else{
        std::cout << "String " << searching_str << " not found." << std::endl;
    }

}
