#include <iostream>
#include <cmath>
using namespace std;

class Account{
private:
    int amount;

public:
    Account() : amount(0){};
    Account(int startAmount){amount = startAmount;};
    int getAmount() const {return amount;};
    friend const Account operator+(const Account& amount1, const Account& amount2);
    friend const Account operator-(const Account& amount1, const Account& amount2);
    friend ostream& operator<<(ostream& output , const Account& amount);
    friend istream& operator>>(istream& input , Account& amount);
    friend const bool operator==(const Account& amount1 , const Account& amount2);
    Account& operator=(const Account& amount1);
    friend const bool operator<(const Account& amount1 , const Account& amount2);
    friend const bool operator>(const Account& amount1 , const Account& amount2);   
};


int main(){
    Account a1;
    cout << "계좌 1 " << a1 << endl;
    Account a2(50000);
    cout << "계좌 2 " << a2 << endl;
    cin >> a1;
    cout << "계좌 1 " << a1;
    Account a3;
    a3 = a1 + a2;
    cout << "두 계좌를 합친만큼 돈이 들어있는 계좌가 있다면 " << a3;
    Account a4;
    a4 = a1 - a2;
    cout << "두 계좌의 돈의 차이만큼 돈이 들어있는 계좌가 있다면 " << a4;
    Account a5;
    cin >> a5;
    if(a5 > a2){
        cout << "계좌 5가 계좌 2 보다 돈이 많이 들어있다\n";
    }
    else if (a5 < a2)
    {
        cout << "계좌 2가 계좌 5 보다 돈이 많이 들어있다\n";
    }
    else if (a5==a2)
    {
        cout << "계좌 5와 계좌 2는 돈이 똑같이 들어있다\n";
    }

    if(a1 + a2 + a5 > 100000){
        cout << "모든 계좌 합이 10만원 넘는다! 오늘은 내가 쏜다~!\n";
    }
    else if (a1 + a2 + a5 < 100000)
    {
        cout << "모든 계좌 합이 10만원이 안된다. 오늘은 못 쏜다 ㅜㅜ \n";
    }
    

}

Account& Account::operator=(const Account &account){
    this->amount = account.amount;
    return *this;
}

const Account operator+(const Account& amount1, const Account& amount2){
    int totalAmount = amount1.getAmount() + amount2.getAmount();
    return Account(amount1.getAmount() + amount2.getAmount());
}
const Account operator-(const Account& amount1, const Account& amount2){
    int totalAmount = amount1.getAmount() - amount2.getAmount();
    return Account(abs(amount1.getAmount() - amount2.getAmount()));
}

ostream& operator<<(ostream& output , const Account& amount){
    output<<" 현재 잔고: "<< amount.amount << "원\n";
    return output;
}

istream& operator>>(istream& input, Account& amount){
    int changedAccount;
    cout<< "얼마를 넣을 것 인가요? : ";
    input >> changedAccount;
    amount.amount = changedAccount;
    return input;
}

const bool operator==(const Account& amount1 , const Account& amount2){
    bool check;
    if(amount1.getAmount() == amount2.getAmount()){
        check = true;
    }else{
        check = false;
    }
    return check;
}

const bool operator<(const Account& amount1 , const Account& amount2){
    bool check;
    if(amount1.getAmount() < amount2.getAmount()){
        check = true;
    }else{
        check = false;
    }
    return check;

}

const bool operator>(const Account& amount1 , const Account& amount2){
    bool check;
    if(amount1.getAmount() > amount2.getAmount()){
        check = true;
    }else{
        check = false;
    }
    return check;
}