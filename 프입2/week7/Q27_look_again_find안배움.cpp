#include <iostream>
#include <string>

void replaceString(std::string &s, const std::string &oldVal, const std::string &newVal) {
    // Find the first occurrence of oldVal
    std::string::iterator it = s.begin();
    while (it != s.end()) {
        it = std::search(it, s.end(), oldVal.begin(), oldVal.end());
        if (it != s.end()) {
            it = s.erase(it, it + oldVal.size());
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        }
    }
}
void replaceString2(std::string &s, const std::string &oldVal, const std::string &newVal) {
    size_t pos = 0;
    while ((pos = s.find(oldVal, pos)) != std::string::npos) {
        s.replace(pos, oldVal.length(), newVal);
        pos += newVal.length();
    }
}

int main() {
    std::string s = "tho the quick brown fox jumps thru the hoop tho.";
    std::string oldVal = "tho";
    std::string newVal = "though";

    replaceString(s, oldVal, newVal);

    std::cout << s << std::endl;

    return 0;
}
