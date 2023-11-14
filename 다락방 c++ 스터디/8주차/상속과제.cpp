#include <iostream>


class Emplyee{
protected:
    std::string name;
    int age;
    std::string level;
    int salary;
public:
    Emplyee(std::string s ,int a, std::string l, int m) : name(s), age(a), level(l),salary(m){};
    void print_info(){
        std::cout << name << " (" << level << ", " << age << ")" << " ==> " << 250 <<"만원" << std::endl;}

};
class Manager : public Emplyee{
    int years;
public:
    Manager(std:: string s, int a, std::string l, int m, int y) : years(y),Emplyee(s,a,l,m){};
    void print_info(){
        std::cout << name << " (" << level << ", " << age << ", "<< years << "년차" <<")" << " ==> " <<250+85*(salary-1) <<"만원" << std::endl;}
};

int main(){

    Emplyee e1("노홍철" , 34 ,"평사원" ,1);
    Emplyee e2("하하",34,"평사원",1);
    Manager m1("유재석", 41, "부장",7,12);
    Manager m2("박명수",43,"차장",5,13);

    e1.print_info();
    e2.print_info();
    m1.print_info();
    m2.print_info();
}