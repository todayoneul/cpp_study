#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void isLongerThanSix(vector<string>&words){
    //count_if 함수를 사용해 strin이 저장되어있는 벡터에서 sizerk 6 초과인 원소들을 가르키는 개수를 리턴받아 count에 저장
    auto count = count_if(words.begin(), words.end(),[](const string&a){return a.size()>6;});
    cout << "Container includes " << count << " words that greater than length 6" << endl;
}

int main(){
    vector<string> s1 = {"apple pie" , "the" , "black cat" , "the", "zebra", "and" , "hat" , "bar" , "cat" , "bananas" , "cat"};
    isLongerThanSix(s1);
}
