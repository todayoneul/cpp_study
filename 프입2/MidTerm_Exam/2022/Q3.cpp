#include <iostream>

using namespace std;


int main(){
    int shiftParam;
    cout << "input shift parameter: ";
    cin >> shiftParam;

    string text;
    cout << "input word: ";
    cin >> text;

    for(auto it = text.begin(); it != text.end(); it++){
        //A-Z : 65- 90 91 -> 65
        //a-z : 97 - 122 83 -65 = 18 -> 19번째 19+23 = 42 -26 = 16
        char alpabet[27] = {'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        int temp=0;
        for(int i=0 ; i<27; i++){
            if(alpabet[i]== *it || alpabet[i] == toupper(*it)){
                break;
            }
            else{
                temp ++;
            }
        }
        int index = temp + shiftParam;
        if(index > 27){
           // 26+1 = 1 26+23 = 23
            index = index % 26;
        }

        if((int)*it >= 97 && (int)*it <=122){
            *it = tolower(alpabet[index]);
        }else{
        *it = alpabet[index];
        }
    }
    cout << "chipher word : " << text;

    return 0;
}