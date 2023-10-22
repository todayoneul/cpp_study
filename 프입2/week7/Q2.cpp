#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

// 파일에서 각 줄을 문자열 벡터에 저장하는 함수
std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "파일을 열 수 없습니다: " << filename << std::endl;
    }

    return lines;
}

// 파일에서 각 단어를 문자열 벡터에 저장하는 함수
std::vector<std::string> readWordsFromFile(const std::string& filename) {
    std::vector<std::string> words;
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string word;
        while (file >> word) {
            words.push_back(word);
        }
        file.close();
    } else {
        std::cerr << "파일을 열 수 없습니다: " << filename << std::endl;
    }

    return words;
}

int main() {
    std::string filename = "sample.txt"; // 입력 파일의 경로로 변경

    // 파일에서 각 줄을 읽어와서 문자열 벡터에 각 줄을 별도의 요소로 저장
    std::vector<std::string> lines = readLinesFromFile(filename);

    // 문자열 벡터에서 각 줄을 출력
    for (const std::string& line : lines) {
        std::cout << "줄: " << line << std::endl;
    }

    // 파일에서 각 단어를 읽어와서 문자열 벡터에 각 단어를 별도의 요소로 저장
    std::vector<std::string> words = readWordsFromFile(filename);

    // 문자열 벡터에서 각 단어를 출력
    for (const std::string& word : words) {
        std::cout << "단어: " << word << std::endl;
    }

    return 0;
}
