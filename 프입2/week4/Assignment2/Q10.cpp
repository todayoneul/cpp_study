#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string input;
    vector<string> text;
    while(getline(cin,input)){
        text.push_back(input);
    }
    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it){
        string to_upper = *it; // const iterator를 사용하기 때문에, 복사할 string을 선언하고 복사된 값을 출력해야 함
        for(char &c : to_upper){ 
            c = toupper(c);
        }
        cout << to_upper <<endl; 
    }
}
