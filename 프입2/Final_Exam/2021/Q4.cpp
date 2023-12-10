#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {0, 1, 3, 2, 4, 5, 5, 6, 6, 7, 7, 7, 9, 8, 10};
    for (auto it = lst.begin(); it != lst.end();) {
        if (*it % 3 == 0) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }

    // 리스트에 남은 요소들을 출력합니다.
    for (const auto& val : lst) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
