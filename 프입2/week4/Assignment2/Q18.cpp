#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    string str2;
    cin >> str1 >> str2;

    if (str1 == str2){
        cout << "same" << endl;
    }else{
        cout << "diff" << endl;
    }
    char cstr1[] = {'h','e','y'};
    char cstr2[] = {'h','e','y'};
    
    if(strcmp(cstr1,cstr2)){
        cout << "diff"<<endl;
    }else{cout<<"same"<<endl;}
}