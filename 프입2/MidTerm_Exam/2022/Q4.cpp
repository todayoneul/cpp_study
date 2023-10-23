#include <iostream>
using namespace std;

class Car{
    float fuel;
    float distance;
    friend void compareCars(const Car& car1 , const Car& car2);
public:
    //float distance;
    Car();
    Car(float,float);
    void drive(float fuel, float distance);
    float compute_fuel_econemy(){
        return distance / fuel;
    };

};

// 중요!!
//Car class 안에 정의되어 있는 compute_fuel_economy는 자동으로 inline 선언되기 때문에 
// 컴파일러는 inline함수에 대해 해당 호출지점을 코드로 바꿔 직접실행하게 하여
// 함수 호출에 오버헤드가 생기지 않으므로 약간의 성능 향상이 있다.

Car :: Car(){
    fuel = 0;
    distance = 0;
}

Car :: Car(float fuel,float distance){
    Car::fuel = fuel;
    Car::distance = distance;
}

void Car :: drive(float fuel,float distance){
    Car::fuel += fuel;
    Car::distance += distance;
}

void compareCars(const Car& car1 , const Car& car2){
    float min_distance;
    min_distance= (car1.distance<car2.distance) ? car1.distance : car2.distance ;
    cout << "I bet the car that drove " << min_distance << " Killometers would be younger than the other" << endl;

}

int main(){
    Car newCar;
    newCar.drive(13.4,104);
    newCar.drive(11.6,96);
    cout << "newCar's fuel economy is " << newCar.compute_fuel_econemy() << endl;

    Car usedCar(445,4000);
    usedCar.drive(5,50);
    cout << "usedCar's fuel economy is " << usedCar.compute_fuel_econemy() << endl;

    compareCars(newCar,usedCar);
    return 0;
}
