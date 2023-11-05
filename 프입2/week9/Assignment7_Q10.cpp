#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void isLongerThanSix(vector<string>&words){
    auto count = count_if(words.begin(), words.end(),[](const string&a){return a.size()>6;});
    cout << "Container includes " << count << " words that greater than length 6" << endl;
}

int main(){
    vector<string> s1 = {"apple pie" , "the" , "black cat" , "the", "zebra", "and" , "hat" , "bar" , "cat" , "bananas" , "cat"};
    isLongerThanSix(s1);
}
