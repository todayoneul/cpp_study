#include <iostream>
#include <vector>
using namespace std;

int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);

typedef int (*funcP) (int,int); // funcP 를 두개의 int 매개변수를 갖고 , int 형을 반환하는 함수포인터로 정의

int main(){

    //문제 조건에 따라 함수포인터를 원소로 갖는 벡터를 선언하고 각각의 함수를 원소로 넣어줌
    vector<funcP> funcP_Vec; 
    funcP_Vec.push_back(add);
    funcP_Vec.push_back(subtract);
    funcP_Vec.push_back(multiply);
    funcP_Vec.push_back(divide);

    // 결과를 출력하기 위해 두개의 변수를 입력받음
    int num1, num2;
    cin >> num1 >> num2;

    //벡터의 원소인 각 함수를 호출해 결과값에 결과를 저장한 후 출력
    for(const funcP& four_basic_operation : funcP_Vec ){
        int result = four_basic_operation(num1,num2);
        cout << "Result : " << result << endl;
    }

}

int add(int num1,int num2){
    return num1 + num2;
}

int subtract(int num1,int num2){
    return num1 - num2;
}

int multiply(int num1,int num2){
    return num1 * num2;
}

int divide(int num1,int num2){
    if (num2 != 0){
        return num1 / num2;
    }
    else{
        cout << "Can't divided by 0" << endl;
        return 0;
    }
}
