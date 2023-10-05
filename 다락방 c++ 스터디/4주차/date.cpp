#include "date.h"

Date::Date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
    setDateArr(year,month,day);
}

Date::Date(int m, int d){
    year = 2023;
    month = m;
    day = d;
    setDateArr(year,month,day);
}

Date::Date(){
    year = 2023;
    month = 10;
    day = 4;
    setDateArr(year,month,day);
}