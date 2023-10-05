#include <iostream>
#include "date.h"
using namespace std;

int main(){
    Date day1(2023,10,4);
    Date day2(10,4);
    Date day3;
    
    Date* pday1 = new Date;
    Date* pday2 = new Date(2023, 10 , 27);
    Date* pday3 = new Date (11,27);

    pday1 -> printDate();
    pday2 -> printDate();
    pday3 -> printDate();

}