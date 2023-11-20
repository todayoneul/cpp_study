#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    string ID ;
    static string id_;
    static int diff;

public:
    Employee() : name("") , ID(id_ + to_string(diff++)){};
    Employee(string s) : name(s),ID(id_+ to_string(diff++)){};

    void printinfo(){
        cout <<"이름: "  << name << " 사원ID: " << ID << endl;
    };

    //Employee(const Employee&) = default;
    Employee(const Employee & e) : name(e.name) , ID(e.ID) {};
    
    //Q2 -> 객체를 복사하거나 할당 할 때, 회사 고유 코드인 "U_"를 붙여 회사 ID를 생성할 수 있도록 operator=함수를 구현해봤음.
    Employee& operator=(const Employee& e){
        if(this != &e){
            name = e.name;
            ID = id_+ to_string(diff++);
        }
        return *this;
    }
};

int Employee::diff = 1000;
string Employee::id_ = "U_";

int main(){
    // Q1 -> default copy constructor면 충분할 것 같다. (Employee class는 ID에 변화를 주기 위해 static int 로 diff를 설정해주고, diff를 변화시켜줌에 따라 사원id를 변화시켜줄 수 있다.)
    // 또한, Employee class는 문자열과 정수 변수만을 가지고 있기 때문에 복사시 추가적인 리소스 관리가 필요하지 않다. 따라서 기본 복사 생성자와 대입 연산자면 충분할 것이다.

    Employee e1;
    Employee e2("일규한");
    Employee e3 = e2;
    Employee e4("이규한");
    e1.printinfo();
    e2.printinfo();
    e3.printinfo();
    e4.printinfo();
}