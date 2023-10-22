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
};