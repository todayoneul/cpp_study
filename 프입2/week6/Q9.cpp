#include <iostream>
using namespace std;

class person{
    string name;
    string address;
    public:
        person(const string&personname ,const string&personadress): name(personname),address(personadress){}

        string getName() const {
            return name;
        }
        string getAddress() const {
            return address;
        }
        person(){};

        void readPerson() {
            cout << "Enter name" << endl;
            cin  >> name;
            cout << "Enter address" << endl;
            cin >> address;
        }
        
        void printPerson(){
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
        }

};

int main(){
    person p1("gyuhan" , "nowon-gu");
    p1.printPerson();
    person p2;
    p2.readPerson();
    p2.printPerson();
}