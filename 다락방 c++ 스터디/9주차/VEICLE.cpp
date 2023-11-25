#include <iostream>

class Vehicle {
public:
    virtual ~Vehicle(){};
    virtual void speed() = 0;
    virtual void capacity() = 0;
    virtual void avgPrice() = 0;
    
};

class Car : public Vehicle{
public:
    virtual ~Car(){};
};

class Bus : public Car{
public:

};

class Helicopter : public Vehicle{
public:
    virtual void speed(){std::cout<<"야용!"<<std::endl;};
};
class Motorcycle : public Vehicle{
public:
    virtual void speed(){std::cout<<"야용!"<<std::endl;};
};
class Train : public Vehicle{
public:
    virtual ~Train(){};
    virtual void speed() = 0;
};
class KTX : public Train{
public:
    virtual void speed(){std::cout<<"야용!"<<std::endl;};
};
class ITX : public Train{
public:
    virtual void speed(){std::cout<<"야용!"<<std::endl;};
};
class Newtown : public Train{
public:
    virtual void speed(){std::cout<<"야용!"<<std::endl;};
};
class Subway : public Train{
public:
    virtual void speed(){std::cout<<"야용!"<<std::endl;};
};

int main(){

    return 0;
}