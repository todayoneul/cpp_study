#pragma once
#include <iostream>
#include <string>
class Date{
private:
    int year;
    int month;
    int day;
    std::string* dateArr;
    void setDateArr(int yeat, int month, int day){
        dateArr = new std::string[3];
        dateArr[0] = std::to_string(year);
        dateArr[1] = std::to_string(month);
        dateArr[2] = std::to_string(day);
    }
    
public:
    Date(int y, int m, int d);
    Date(int m, int d);
    Date();
    void printDate(){
        std::cout << "오늘은 " << dateArr[0] << "년 "
        << dateArr[1] << "월 " << dateArr[2] << "일 입니다." << std::endl;
    };
};