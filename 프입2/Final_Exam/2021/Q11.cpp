#include <iostream>
#include <initializer_list>
class favoirtenum {
public:
    favoirtenum(std::initializer_list<int>);
    favoirtenum(const favoirtenum&); // 복사 생성자
    favoirtenum& operator=(const favoirtenum&); // 복사 대입 연산자
    ~favoirtenum(); // 소멸자

    void printnum();

    int totoalnum;
    int* nums;
};

favoirtenum::favoirtenum(std::initializer_list<int> lst) {
    totoalnum = lst.size();
    nums = new int[totoalnum];

    int i = 0;
    for (auto c : lst) {
        nums[i++] = c;
    }
}

// 복사 생성자 구현
favoirtenum::favoirtenum(const favoirtenum& other) {
    totoalnum = other.totoalnum;
    nums = new int[totoalnum];
    for (int i = 0; i < totoalnum; ++i) {
        nums[i] = other.nums[i];
    }
}

// 복사 대입 연산자 구현
favoirtenum& favoirtenum::operator=(const favoirtenum& other) {
    if (this != &other) { // 자기 자신에 대한 할당 방지
        delete[] nums; // 기존 할당된 메모리 해제

        totoalnum = other.totoalnum;
        nums = new int[totoalnum];
        for (int i = 0; i < totoalnum; ++i) {
            nums[i] = other.nums[i];
        }
    }
    return *this;
}

// 소멸자 구현
favoirtenum::~favoirtenum() {
    delete[] nums;
}

void favoirtenum::printnum() {
    for (int i = 0; i < totoalnum; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    favoirtenum mynum({3,7,21});
    mynum.printnum();

}