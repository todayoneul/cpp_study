#include <iostream>

class Person{
protected:
    std::string name;
    int age;
public:
    Person(std::string s, int a) : name(s) , age(a){};
    virtual void showInfo(){
        std::cout << "이름: " << name << "\n" << "나이: " << age << std::endl;
    }
};

class Student : public Person{
    int Student_id;
public:
    Student(std::string s, int a, int n) : Student_id(n),Person(s,a) {};
    void showInfo(){
        std::cout << "이름: " << name << "\n" << "나이: " << age << "\n" << "학번: " <<Student_id <<  std::endl;
    }
};

int main(){
    Person p("유재석" ,52);
    Student s("이규한",21,22100757);
    Person* p_p = &s;
    Student* s_P = &s;
    p_p->showInfo();
    s_P->showInfo();
    return 0;
}