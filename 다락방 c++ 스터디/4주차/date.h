#pragma once

class Date{
private:
    int year;
    int month;
    int day;
    void setDateArr(int yeat, int month, int day){
        string* daterArr = new string[3];
        daterArr[0] = to_string(year);
        daterArr[1] = to_string(month);
        daterArr[3] = to_string(day);
    }
    
public:
    Date(int y, int m, int d);
    Date(int m, int d);
    Date();
    void printDate(){
        
    }

};