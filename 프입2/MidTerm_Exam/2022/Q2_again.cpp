#include <iostream>
using namespace std;

auto func(int(&arr)[10]) -> double(*)[20]
{
    
    // 'func' 함수는 정수 10개로 이루어진 배열에 대한 참조를 받고,
    // 크기가 20인 double 배열에 대한 포인터를 반환합니다.
    // 이 함수는 입력 배열에 어떤 연산을 수행해야 하는데,
    // 여기서는 구체적인 연산 내용이 없습니다.
}
double(*func2(int(&arr)[10]))[20]{

}

void useFunc(decltype(func) *pf)
{
    // double(*(*pf)(int(&)[10]))[20]

    // 'useFunc' 함수는 double(*)[20] 형식의 포인터를 인자로 받습니다.
    // 이 포인터는 함수 포인터 'pf'를 나타냅니다.
    // 'pf'는 int(&)[10]를 받아서 double(*)[20]를 반환하는 함수를 가리킵니다.
    // 이 함수는 'func'와 같은 시그니처를 가지는 함수 포인터를 받아서 사용합니다.
}

int main()
{
   // 'func' 함수와 같은 시그니처를 가지는 함수 포인터 'pf'를 선언하고 초기화합니다.
   
   //double(*(*pf)(int(&)[10]))[20] = func;
    typedef decltype(func)(*Pf);
    Pf pf= func;
   // 'useFunc' 함수에 'pf' 함수 포인터를 전달합니다.
   useFunc(pf);
}
