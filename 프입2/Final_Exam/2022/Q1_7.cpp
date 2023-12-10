#include <iostream>
#include <vector>
#include <list>
#include <random>
#include <time.h>
#include <algorithm>

class Animal{
public:
    Animal() = default;
    Animal(std::string s, int i) : name(s) , age(i) {} //Q3
    Animal(std::string s) {name = s; age = 0;};
    Animal(const Animal& other):name(other.name), age(other.age), familyMembers(other.familyMembers) {};
    Animal& operator=(const Animal& other){
        name = other.name;
        age = other.age;
        familyMembers =other.familyMembers;
        return *this;
    }
    ~Animal(){};

    virtual void selfintro(std::ostream& os) {
        cry();
        os << name << ", " << getAgeInHumanYears() << "years old in human year" << std::endl;
    }
    void selfintro();
    int getRealAge() {return age;}
    friend std::ostream& operator<<(std::ostream& os, Animal& a){
        a.selfintro(os);
        return os;
    }
    std::vector<std::string> familyMembers;
protected:
    virtual void cry() = 0;
    virtual int getAgeScale() = 0;
    int getAgeInHumanYears() {return 24+(age-2)*getAgeScale();}
    std::string name;
    int age;

};



void Animal::selfintro(){
    cry();
    std::cout<< name << ", " << getAgeInHumanYears() << "years old in human year" << std::endl;

}

class Dog : public Animal{
private:
    static int ageScale; //Q
public :
    Dog() = default;
    Dog(std::string s, int i) : Animal(s,i){}; // Q4
protected:
    void cry(){std::cout<< "bow wow!";}
    int getAgeScale() {return ageScale;}
    
};

class Cat: public Animal{
private:
    static int ageScale; // Q

public:
    Cat() = default;
    Cat(std::string s, int i) : Animal(s,i){}; //Q4

protected:
    void cry(){std::cout<< "Mewo~";}
    int getAgeScale() {return ageScale;}
};

//Q14 
class Cow: public Animal{
private:
    int ageScale =4;
public:
    Cow()=default;
    void fcn(/*const*/Cow& cow1) {cow1.selfintro();}
protected:
    void cry() {std::cout<<"Moo~";}
    int getAgeScale(){return ageScale;}

};

void printSizenCappacity(const std::vector<Dog>& list){
    std::cout << "size: " << list.size() << " capacity: " << list.capacity() << std::endl;
}

int Dog::ageScale = 4;
int Cat::ageScale = 5;

int main(){
    std::vector<Dog> dogList;
    printSizenCappacity(dogList);

    dogList.reserve(4);
    printSizenCappacity(dogList); //Q1 - 0,0
//                                       0,4
//                                       5,8

    Dog dog1("teddy" ,12);
    dogList.push_back(dog1);
    dogList.push_back(Dog("max" , 1));
    dogList.push_back(Dog("millo" , 5));
    dogList.push_back(Dog("buddy" ,7));
    //dogList.push_back(std::string("Charlie")); // Q6 - 작동하는 내부적인 과정 설명: 
    printSizenCappacity(dogList);
    for(std::vector<Dog>::iterator it = dogList.begin(); it !=dogList.end() ; ++it ){ // Q2
        (*it).selfintro(); //Q2
    }
    const std::string names[10] = {"Max" , "Charlie", "Cooper", "Millo", "Buddy" , "Rocky" , "Bear" , "Teddy" , "Duke", "Leo"};

    int numDogs;
    std::cout<<"Type number of dogs : ";
    std::cin >> numDogs;
    
    Dog * dogarr = new Dog[numDogs];
    std::default_random_engine random_engine(time(nullptr));
    std::uniform_int_distribution<int> rand_name(0,9);
    std::uniform_int_distribution<int> rand_num(0,20);
    std::uniform_int_distribution<int> rand_num_cat(2,20);
    for(int i =0 ; i < numDogs ; i++){
        std::string dogname = names[rand_name(random_engine)];
        dogarr[i] = Dog(dogname, rand_num(random_engine));
    }
    //dogarr[3].selfintro();

    std::list<Animal*> animalList;
    for(int i=0; i<numDogs; ++i){
        animalList.push_back(&dogarr[i]);
    }
    Cat* cat1 = new Cat("Lilly",9);
    Cat* cat2 = new Cat("Kitty" ,6);
    animalList.push_back(cat1);
    animalList.push_back(cat2);
    //Q10
    for(auto it = animalList.begin() ; it != animalList.end();){
        if((*(*it)).getRealAge() < 2){
            it = animalList.erase(it);
            std::string catname = names[rand_name(random_engine)];
            Cat * cat = new Cat(catname,rand_num_cat(random_engine));
            it = animalList.insert(it, cat);
        }
        else ++it;
    }

    //Q11
    auto it = std::find_if(animalList.begin() , animalList.end(), [](Animal* animal){return animal->getRealAge() > 10;});
    if(it != animalList.end()){
        (*it)->selfintro();
    }else{
        std::cout << "no age greater than 10" << std::endl;
    }

    

    // for(auto ele : animalList){

    //     (*ele).selfintro();
    // }
    delete[] dogarr;
    delete cat1;
    delete cat2;
    
}