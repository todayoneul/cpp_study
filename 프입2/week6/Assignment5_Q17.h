#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Screen{
    public:
        typedef string::size_type pos;

        //3가지 type의 constructor
        Screen() = default;
        Screen(pos ht, pos wd): height(ht), width(wd),contents(ht * wd,' '){};
        Screen(pos ht, pos wd, char c):height(ht) , width(wd) , contents(ht * wd ,c){}
        
        Screen &set(char);
        Screen &set(pos,pos,char);

        Screen &display(ostream &os){do_display(os); return *this;}
        const Screen &display(ostream &os) const{do_display(os); return *this;}

        char get() const //cursor위치의 존재하는 char를 가져옴
            { return contents[cursor]; }
        inline char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);

    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;
        void do_display(ostream &os) const{os << contents;}
};
