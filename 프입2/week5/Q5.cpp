#include <iostream>
#include "Q5.h"
using namespace std;

int cnt =-1;

int ret_0(int&cnt){
    cnt ++;
    return cnt;

}

int main(){
    cout << ret_0(cnt) << endl;
    cout << ret_0(cnt) << endl;
    cout << ret_0(cnt) << endl;
}