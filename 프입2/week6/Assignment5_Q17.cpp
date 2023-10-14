#include "Assignment5_Q17.h"

inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r*width + col] = ch;
    return *this;
}

char Screen::get (pos r, pos c)const {
    pos row = r * width;
    return contents[row + c];
}

int main(){
    //3가지의 객체를 생성해 각각 테스트
    Screen testDefault;
    testDefault.move(4,0);
    testDefault.set('#').display(cout);
    cout << "\nset_test    :" << testDefault.get()<< endl;
    cout << endl;

    Screen test_1(5,5);
    test_1.display(cout);
    test_1.move(3,1);
    test_1.set('#');
    test_1.display(cout);
    cout << "\nset_test    :" << test_1.get() << endl;
    cout << endl;

    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout<< "\n";
    myScreen.display(cout);
    cout<< "\n";

    //get 함수 테스트
    cout << myScreen.get() << endl;
    //17번 두번째 소문제에 대한 답

    /*
    만약 `move`, `set`, 그리고 `display` 함수의 반환 type이 `Screen&` 대신 `Screen`일 경우, 
    `myScreen.move(4,0).set('#').display(cout);` 경우엔 
    `move` 및 `set` 함수는 `myScreen` 객체의 복사본에 대한 조작을 수행하며, 원본 객체 `myScreen`은 변경되지 않지만 display함수에 이용되는 복사된 객체가 변경되어 출력됨. 
    하지만  `myScreen.display(cout);` 같은 경우엔 원래 생성된 `myScreen(5,5,'X');`와 동일한 내용을 출력함. 원본 객체인 원본 객채인 `myScreen`은 변경되지 않으며, 변경된 사항은 복사본에만 적용되기 때문.
    */
}