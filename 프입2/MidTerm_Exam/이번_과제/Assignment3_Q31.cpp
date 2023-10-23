#include <iostream>
#include <vector>
#include <random>
#include <time.h>
using namespace std;

int main(){
    //학생 수는 30명으로 고정
    const int students = 30;

    // 각 학생의 점수를 벡터에 저장
    vector<unsigned int> scores(students);

    // 합불여부를 저장하기 위한 unsigned int 형 선언 및 0으로 초기화 -> 이후 비트 쉬프트 연산으로 각 학생의 합불여부 저장
    unsigned int passorFail = 0;

    default_random_engine random_engine(time(nullptr));
    uniform_int_distribution<unsigned int> score_range(0,100);

    // 각각의 학생의 점수를 저장해주고 60점이 넘으면 비트 쉬프트 연산으로 1로 합격을 저장해줌
    for (int i =0; i<students; ++i){
        scores[i] = score_range(random_engine);
        if (scores[i] >= 60){
            passorFail |= (1U << i);
        } 
    }
    // cout << passorFail <<endl;

    // 각 학생의 위치에 있는 점수가 통과인지 아닌지 검사해 통과라면 passed를, 아니라면 failed를 출력
    for (int i=0; i<students; ++i){
        // cout << "Student #" << i+1 << ": " << scores[i] << endl;

        //현재 검사하는 학생에 저장되어있는 비트가 0이 아닌지 확인하고 아니라면 passed변수에 true 저장
        bool passed = (passorFail & (1U << i)) !=0;
        cout << "Student #" << i+1 << ": " << (passed ? "passed" : "failed")<< endl;
    }
}