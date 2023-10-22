#include <iostream>

class Y;  // Y 클래스의 전방 선언

class X {
private:
    Y* ptrY;  // Y 객체에 대한 포인터

public:
    X() : ptrY(nullptr) {}

    void setY(Y* y) {
        ptrY = y;
    }

    void showMessageFromY() {
        if (ptrY != nullptr) {
            std::cout << "Message from Y: ";
            ptrY -> displayMessage();
        }
    }
};

class Y {
private:
    X objX;  // X 객체

public:
    void setX(X x) {
        objX = x;
    }

    void displayMessage() {
        std::cout << "Hello from X!" << std::endl;
    }
};

int main() {
    X x;
    Y y;

    x.setY(&y);  // X가 Y를 가리킴
    y.setX(x);    // Y가 X 객체를 포함

    x.showMessageFromY();  // Y에게 메시지를 출력

    return 0;
}
