#include <iostream>
using namespace std;

class circle{
    static double pi;
    double radius;
    double area;
    void calculateArea();
    public:
        circle() = default;
        circle(double radius);

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

circle :: circle(double radius){
    circle :: radius = radius;
    calculateArea();
}

