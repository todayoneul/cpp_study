#include <iostream>
using namespace std;

auto func(int(&arr)[10]) -> double(*)[20]{ 
    //...

}

// double(*(func1(int(&arr)[10])))[20]{

// }

void useFunc(double(*arr)[20])
{
    // ... 
}

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    double (*pf)[20]= func(arr1); 
    useFunc(pf);
}