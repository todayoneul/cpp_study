// #include <iostream>
// // using namespace std;

// int main(){
//     std :: cout << "hello world";
//     return 0;
// }

#include <iostream>
using namespace std;

int(*func(double x))[10]{
//...
}

auto func2(double) -> int (*) [10]{
//...
}

//중요 ! 

// int (*f1(int)) (int*,int); 라는 함수를 가르키는 함수포인터는
// auto f1(int) -> int(*)(int*,int) 과 같이 정의된다
//