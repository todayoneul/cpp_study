#include <iostream>

using namespace std;

int main(){
    for (int i=1; i <=10 ; i++){
        if (i%2 ==0){
            cout << i << "는 짝수입니다." << endl;
        }
        else{
            cout << i << "는 홀수입니다." << endl; 
        }
    }
    cout << endl;
    for (int i = 1 ; i<=50; i++){
        if (i % 5 == 0 && i % 3 == 0){
            cout << i << "는 5의 배수이며 3의 배수입니다\n";
        }
        else if (i % 5 ==0 ){
            cout << i << "는 5의 배수입니다\n";
        }
        else if (i % 3 == 0){
            cout << i << "는 3의 배수입니다\n";
        }
    }
}