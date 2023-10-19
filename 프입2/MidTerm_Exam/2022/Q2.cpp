#include <iostream>
using namespace std;

auto func(int(&arr)[10]) -> double(*)[20]{
    //...
}

void useFunc(double(*pf)[20])
{
    // ...
}

int main(){
    int arr[10];
    double (*pf)[20] = func(arr);
    useFunc(pf);
}