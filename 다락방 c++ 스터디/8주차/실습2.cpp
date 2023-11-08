#include <iostream>
using namespace std;

class Base{
    protected:
        string parent_string;
    public:
        Base():parent_string("기반"){cout << "기반 클래스" << endl;}
        void what(){cout << parent_string << endl;}
    };

class Derived : protected Base{
    string child_string;
    public:
        Derived():child_string("파생") , Base(){
            cout << "파생 클래스" << endl;
            parent_string = "바꾸기";
        }
        void what(){cout << child_string << endl;}
};
int main(){
    Base p;
    p.what();
    Derived c;
    c.what();
    return 0;
}