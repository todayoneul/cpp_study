#include <iostream>
using namespace std;

class Car{
    float fuel;

public:
    float distance;
    Car();
    Car(float,float);
    void drive(float fuel, float distance);
    float compute_fuel_econemy(){
        return distance / fuel;
    };

};

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
    cout << "newCar's fuel economy is " << usedCar.compute_fuel_econemy() << endl;

    compareCars(newCar,usedCar);
    return 0;
}
