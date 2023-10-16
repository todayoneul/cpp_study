#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    const char* str1 = "hello world! ";
    const char* str2 = "cpp is amazing";
    char* str3;
    strcpy(str3,str1);
    strcat(str3,str2);
    cout << str3 << endl;
}