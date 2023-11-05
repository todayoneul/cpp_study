// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// bool isMoreThanFive(const string &word){
//     return word.size() > 5;
// }


// int main(){
//     string word;
//     cin >> word;
//     auto partitionPoint = partition(word.begin(),word.end(),isMoreThanFive);
//     for(auto it = word.begin(); it != partitionPoint; it++){
//         cout << *it;
//     }
//     cout << " ";
//     if(partitionPoint != word.end()){
//         for(auto it2  = partitionPoint ; it2 != word.end() ; it2++){
//             cout << *it2;
//         }
//     }

// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// Predicate function to check if a string has five or more characters
bool hasFiveOrMoreCharacters(const std::string& str) {
    return str.size() >= 5;
}

int main() {
    // Create a vector of words
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape"};

    // Use std::partition to separate words based on the predicate
    auto partition_point = std::partition(words.begin(), words.end(), hasFiveOrMoreCharacters);

    // Print words with five or more characters
    std::cout << "Words with five or more characters: ";
    for (auto it = words.begin(); it != partition_point; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
