#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    string input;

    while (cin >> input) {
        words.push_back(input);
    }

    int maxCount = 1;
    string repeatedWord;

    for (int i=0; i<words.size(); i++) {
        int count = 1;

        for (int j=0; j<words.size(); j++) {
            if (i != j && words[i] == words[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            repeatedWord = words[i];
        }
    }

    if (maxCount ==1) {
        cout << "No word was repeated." << endl;
    } else {
        cout << "Most duplicated word: " << repeatedWord << endl;
        cout << "It occurred " << (maxCount) << " times." << endl;
    }
}


