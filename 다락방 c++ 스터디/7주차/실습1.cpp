#include <iostream>
#include <cmath>
using namespace std;

class Money{
private:
    int amount;

public:
    Money() : amount(0){};
    Money(int startAmount){amount = startAmount;};
    int getAmount() const {return amount;};
    friend const Money operator+(const Money& amount1, const Money& amount2);
    friend const Money operator-(const Money& amount1, const Money& amount2);
    friend const Money operator-(const Money& amount1);
    friend ostream& operator<<(ostream& output , const Money& amount);
    friend istream& operator>>(istream& input , Money& amount);
};


int main(){
    Money myMoney(30000);
    Money yourMoney(50000);
    Money ourMoney = myMoney + yourMoney;
    Money moneyDifference = myMoney - yourMoney;
    Money finallMoney = -moneyDifference;

    cout<< "원래 잔고" << myMoney << endl;
    cin >> myMoney;
    cout << myMoney << "으아아악" <<endl;
}


const Money operator+(const Money& amount1, const Money& amount2){
    int totalAmount = amount1.getAmount() + amount2.getAmount();
    return Money(amount1.getAmount() + amount2.getAmount());
}
const Money operator-(const Money& amount1, const Money& amount2){
     int totalAmount = amount1.getAmount() - amount2.getAmount();
    return Money(abs(amount1.getAmount() - amount2.getAmount()));
}

const Money operator-(const Money& amount1){
     int totalAmount = -(amount1.getAmount());
    return Money(-amount1.getAmount());
}

ostream& operator<<(ostream& output , const Money& amount){
    output<< "현재 잔고는 " << amount.amount << "원 입니다.";
    return output;
}

istream& operator>>(istream& input, Money& amount){
    int changedMoney;
    cout<< "바뀐 잔고: ";
    input >> changedMoney;
    amount.amount = changedMoney;
    return input;
}