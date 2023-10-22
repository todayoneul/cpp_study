#include <iostream>
#include <string>
using namespace std;
// 함수를 정의하는 방법 다시 보고 가기
string (&getArrayOfStrings())[10]
{

}

using ArrayOfStrings = string[10];
ArrayOfStrings& getArrayOfStrings();

auto getArrayOfStrings() -> string(&)[10];

