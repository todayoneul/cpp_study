#include <iostream>
#include <time.h>
using namespace std;

class ClockP{
    int hour;
    int minute;
    int sec;

public:
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);

    int getHour();
    int getMinute();
    int getsecond();
    string getCurrentTime();

    void addTime(int minute);
};

int main(){

}
