#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//알파벳 순서로 vector를 정렬하고, unique 함수를 통해 중복을 제거한 vector의 마지막 iterator의 정보를 이용해 중복 단어가 제거된 vector 생성
void elimDups(vector<string>&words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
// 두 string 크기 비교
bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

string make_plural(size_t ctr, const string &word, const string &ending){
    return (ctr >1)? word + ending : word;
}

void biggies(vector<string>&words, vector<string>::size_type sz){
    elimDups(words);
    
    //stable_sort도  순서 보장
    stable_sort(words.begin(),words.end(),[](const string &a, const string &b){return a.size() > b.size();});
    // auto wc = find_if(words.begin(),words.end(),[sz](const string &a){return a.size() >= sz;});

    // Q9-1 find_if 함수를 partition 알고리즘으로 바꿀 때 - 요소 분할 후 요소 순서 보장하지 않음
    // auto wc = partition(words.begin(),words.end(),[sz](const string &a){return a.size() < sz;});
    // auto count = words.end() - wc;

    //Q9-2 stable_partition 함수를 이용할 때 - 요소의 순서가 변하지 않음
    auto wc = stable_partition(words.begin(),words.end(),[sz](const string& a){return a.size() < sz;});
    auto count = words.end() - wc;


    cout << count << " " << make_plural(count,"word","s") << " of length " << sz << " or longer"<< endl;
    for_each(wc,words.end(),[](const string &s){cout << s << " ";});
    cout << endl;
}

int main(){
    vector<string> s1 = {"apple" , "the" , "cat" , "the", "zebra", "and" , "hat" , "bar" , "cat" , "banana" , "cat"};
    biggies(s1,3);
}