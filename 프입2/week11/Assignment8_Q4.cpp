#include <iostream>

using namespace std;

class numbered{
public:
    int mysn = 129837;
    numbered() = default;
    numbered(const numbered&) = default;
    numbered(numbered& copynumbered){mysn = 38792;}; // Q_2 -> 새롭게 mysn을 생성하는 copy constructor 생성
};
void f(const numbered& s){cout << s.mysn << endl;} // Q3 -> f의 patameter를 const numbered&로 바꿈 

int main(){
    numbered a ,b = a, c = b;
    f(a),f(b),f(c); //Q1 -> numbered class의 객체가 생성될 때마다 default copy constructor가 생성되어 numbered에 존재하는 모든 객체를 복사한다.(내 코드에서는 copy constructor를 명시해주었지만, 명시하지 않으면 compiler가 자동으로 만듬)
                    // 따라서 3개의 객체 모두 똑같은 값 출력 : 129837\n 129837\n 129837\n
                    //Q2 -> 새로운 copy constructor에 의해 output에 변화가 생김 : 38792\n 38792\n 38792\n
}                   //Q3 -> output에 변화가 생김 : 129837\n 38792\n 38792\n
                    //Q2와 Q3에서 f(a) 출력의 변화가 생기는 이유는 다음과 같음
                    //Q2에서 생성한 새로운 copy constructor는 numbered 객체를 복사할 때마다 mysn값을 변경함
                    //매개변수가 numberd 일 때, f 함수에서 매개변수를 불러 올 때, call by value로 매개변수를 불러오기 때문에, a라는 객체를 복사해서 불러옴.
                    //따라서 복사하는 과정에서 mysn이 변경되어 38792가 출력됨
                    //하지만 매개변수가 const numberd&로 변경된다면 call by reference로 객체 a 그 자체를 불러오므로 초기에 mysn로 설정된 129837을 불러와 출력하게 됨.

