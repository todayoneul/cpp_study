#include <iostream>
using namespace std;

void swapPoint(int*, int*);
void swapRef(int&,int&);

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << "current num1: " << num1 << "\ncurrent num2: " << num2 << endl;

    swapPoint(&num1,&num2);
    cout << "\nSwap nums by using Pointers\nnum1: " << num1 << "\nnum2: " << num2 << endl;

    cout << "\ncurrent num1: " << num1 << "\ncurrent num2: " << num2 << endl;
    swapRef(num1,num2);
    cout << "\nSwap nums by using Reference\nnum1: " << num1 << "\nnum2: " << num2 << endl;

    //pointer를 이용한 함수에서는 매개변수로 포인터를 받고, 포인터가 참조하는 값을 변경한다.
    //반면 Reference를 이용한 함수에서는 매개변수로 참조할 정수형을 받고, 정수형을 직접 변경한다.
    // Regerence를 이용한 함수가 더 깔끔하고 직관적으로 보기 쉬운 코드를 만드는 것 같아 더 쉽게 사용할 수 있을 것 같다.
}

void swapPoint(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapRef(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}