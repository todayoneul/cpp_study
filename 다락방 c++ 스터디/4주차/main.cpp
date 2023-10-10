#include "date.h"
#include "date.cpp"

using namespace std;

int main(){
    
    Date* pday1 = new Date;
    Date* pday2 = new Date(2023, 10 , 27);
    Date* pday3 = new Date (11,27);

    pday1 -> printDate();
    pday2 -> printDate();
    pday3 -> printDate();

    delete pday1;
    delete pday2;
    delete pday3;
    
    return 0;
}