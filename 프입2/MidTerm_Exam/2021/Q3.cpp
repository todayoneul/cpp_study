// #include <iostream>
// // using namespace std;

// int main(){
//     std :: cout << "hello world";
//     return 0;
// }

#include <iostream>
using namespace std;

int(*func(double x))[10]{ // func return int* , func의 declare가 double parameter를 가지는 것
// 위 func 함수는 int[10]array 의 맨 첫번째 원소를 가르키는 pointer를 return
//...
}

auto func2(double x) -> int (*) [10]{
//...
}
decltype(func) * func3(double x);

using Fp= int(*)[10];

Fp func4(double x);

//중요 ! 

// int (*f1(int)) (int*,int); 라는 함수를 가르키는 함수포인터는
// auto f2(int) -> int(*)(int*,int) 과 같이 정의된다
//