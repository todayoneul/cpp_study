#include <iostream>
#include <initializer_list>
class favoirtenum {
public:
    favoirtenum(std::initializer_list<int>);
    favoirtenum(const favoirtenum&); // 복사 생성자
    favoirtenum& operator=(const favoirtenum&); // 복사 대입 연산자

    favoirtenum operator*(const favoirtenum &f1) {
    const int newSize = this->totoalnum * f1.totoalnum;
    favoirtenum result({}); // 새 favoirtenum 객체 생성

    // 동적으로 할당된 배열에 적절한 크기로 메모리 할당
    result.nums = new int[newSize];
    result.totoalnum = newSize;

    // 두 favoirtenum 객체의 값 곱셈 수행
    int index = 0;
    for (int i = 0; i < f1.totoalnum ; ++i) {
        for (int j = 0; j < this->totoalnum ; ++j) {
            result.nums[index++] = this->nums[j] * f1.nums[i];
        }
    }

    return result;
    }

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
    favoirtenum mynum({1,3,7});
    favoirtenum mynum2({2,4});

    favoirtenum result = mynum * mynum2; // 2,6,14,4,12,28이 출력되어야 함
    result.printnum();

}