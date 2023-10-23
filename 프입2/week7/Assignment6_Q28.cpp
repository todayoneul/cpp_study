#include <iostream>
#include <string>
using namespace std;

string getName_Prefix_Sufix(string&,string&,string&);
string getName_Prefix_Sufix2(string&,string&,string&);

int main(){
    string name;
    string prefix;
    string suffix;
    cout << getName_Prefix_Sufix(name,prefix,suffix) << endl;
    cout << getName_Prefix_Sufix2(name,prefix,suffix) << endl;
}

//iterator를 이용한 prefix , suffix 추가 함수
string getName_Prefix_Sufix(string &name ,string &prefix,string &suffix){
    cin >> name >> prefix >> suffix; // 3가지 변수를 입력받고
    string result = name; // 결과에 일단 이름 추가
    result.insert(result.begin(),prefix.begin(),prefix.end()); //결과값 시작하는 이터레이터 위치에 입력받은 prefix추가
    result.append(suffix); // 뒤에는 append함수를 이용해 suffix추가

    return result;
}

//position과 length 함수를 이용한 prefix , suffix 추가 함수
string getName_Prefix_Sufix2(string &name ,string &prefix,string &suffix){
    cin >> name >> prefix >> suffix; //마찬가지로 입력받고
    string result = name; // 결과에 이름을 일단 추가
    result.insert(0,prefix); // 맨 앞에 prefix추가
    result.insert(result.length(),suffix); //결과값의 길이만큼 이동한 위치에 suffix추가
    return result;
}