#include <iostream>

class Animal {
public:
    virtual ~Animal(){};
    virtual void cry() = 0;
};

class Dog : public Animal{
public:
    virtual void cry() {std::cout<<"멍멍!"<<std::endl;};
};

class Cat : public Animal{
public:
    virtual void cry(){std::cout<<"야용!"<<std::endl;};
};

int main(){
    Dog d;
    Cat c;
    d.cry();
    c.cry();
    return 0;
}