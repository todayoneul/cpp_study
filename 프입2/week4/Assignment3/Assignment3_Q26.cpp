#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    string input;
    //input을 계속해서 입력해 벡터에 저장해주다가 엔터를 누르고 control + d 키를 통해 EOF 시켜 쉘 종료시켜준다
    while (cin >> input) 
        words.push_back(input);
    
    //최대반복획수와 반복된 단어 선언 및 초기화
    int maxCount = 1;
    string repeatedWord;
    // 첫번째 for문에서는 단어를 선택하고 그 단어의 count 초기화
    for (int i=0; i<words.size(); i++) {
        int count = 1;
        //두번째 for문에서는 벡터의 원소를 하나씩 검사하면서 선택한 단어와 중복되는 단어를 찾고 count++(단, 같은 위치의 단어의 횟수를 count하지 않음)
        for (int j=0; j<words.size(); j++) {
            if (i != j && words[i] == words[j]) {
                count++;
            }
        }
        // 만약 선택한 단어의 중복 횟수가 저장된 최대 반복 횟수보다 크다면 최대 반복 횟수 갱신
        if (count > maxCount) {
            maxCount = count;
            repeatedWord = words[i];
        }
    }
    // 최대 반복수가 1 일 경우 No word was repeated. 출력
    if (maxCount ==1) {
        cout << "No word was repeated." << endl;
    } else { // 아니라면 반복된 단어, 반복횟수 출력
        cout << "Most duplicated word: " << repeatedWord << endl;
        cout << "It occurred " << (maxCount) << " times." << endl;
    }
}


