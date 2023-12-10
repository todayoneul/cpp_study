#include<iostream>

class a{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class parent{
    friend class a;
public:
    int pub;
protected:
    int pro;
private:
 int pri;
public:
    parent() = default;
    ~parent() {
        printpub();
        printpro();
    };
    void printpub(){
        std::cout<< pub << " ";
    }
    void printpro(){
        std::cout <<pro << " ";
    };
    void printpri(){
        std::cout<<pri<<" ";
    }

};

class b{
    public:
    int pub;
    protected:
    int pro;
    private:
    int pri;
};
class child:protected parent{
    friend class b;
    public:
    int pub;
    protected:
    int pro;
    private:
    int pri;
    public:
    child() : parent() {};
    ~child(){};
    void func1(parent &p){
        //pub = p.pro;
    }
    void func2(a&a){
        //pub = a.pro;
    }
    void func3(b&b){
        //pub = b.pro;
    }
    void func4(){
        pub = pro;
    }
    void f5(){
        pub = pri;
    }
    void f6(){
        printpub();
    }
    void f7(){
        printpro();
    }
    void f8(){
        printpri();
    }

};

int main(){
    //parent::printpri();
    child c;
    //c.pro = 1;
    b b;
    //c.pro = b.pub;
    //c.pri = b.pub;

    a a;
    //c.pro = a.pub;
    //c.pri = a.pub;
}