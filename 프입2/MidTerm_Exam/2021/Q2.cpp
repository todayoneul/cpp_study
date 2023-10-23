#include <iostream>
using namespace std;

class circle{
    static double pi;
    double radius;
    double area;
    void calculateArea();
    public:
        circle() = default;
        circle(double radius){
            circle :: radius = radius;
            calculateArea();
        };
        void setRadius(double radius);
        double getRadius(){return radius;}
        double getArea(){return area;}

};

double circle :: pi =3.141592;

int main(){
    circle c;
    circle c2(5);
    c.setRadius(10);
    cout << "The area of a circle with radius " << c.getRadius() << " is " << c.getArea() << endl;
    cout << "The area of a circle with radius " << c2.getRadius() << " is " << c2.getArea() << endl;
}

void circle :: setRadius(double radius){
    circle :: radius = radius;
    calculateArea();
}

void circle :: calculateArea(){
    circle :: area = radius * radius * pi;
}

//컴파일러의 동작과 프로그램의 성능의 측면에서 작성한 코드의 setRadius 와 circle의 다른 멤버 함수를 비교하여라.

