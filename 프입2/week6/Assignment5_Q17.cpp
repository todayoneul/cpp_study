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

    //move, set 그리고 display 함수의 return type이 Screen&이 아닌 Screen 이라면 myScreen.move(4,0).set('#').display(cout); 같은 경우엔 move 및 set 변경값이 myScreen 객체의 복사본에 적용되어, return type이 Screen&일 경우와 똑같이 출력(display)되지만,
    //myScreen.display(cout);같은 경우엔 myScreen.move(4,0).set('#').display(cout);에서의 move 및 set 값이 실제 객체에 적용된 것이 아니라 복사본에 적용된 것이기 때문에 처음에 설정한 Screen myScreen(5,5,'X'); 그대로 출력(display)된다.
}