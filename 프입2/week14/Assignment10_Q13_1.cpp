#include <iostream>
#include <string>

// Q13에 대한 답 :
// Disc_quote에 default constructor를 명시적으로 작성하지 않아도 컴파일러가 자동으로 생성해주지만
// 아래 변수 4개를 가지는 또 다른 생성자를 정의했기 때문에, default constructor를 생성해주지 않게 됨
// 만약 default constructor를 명시적으로 작성해 주지 않는다면, Disc_quote를 상속받는 다른 class에서 문제 발생 가능
// 특히, Disc_quote를 상속받는 Bulk_quote 클래스의 객체를 쉽게 생성하기 위해 4개의 매개변수를 모두 입력해야 할 뿐 아니라, Bulk_quote 클래스의 다중 상속이 불가능해짐.

class Quote
{
public:
    Quote() = default;
    Quote(const std::string &b, double s_p): bookNo(b), price(s_p) {}
    std::string isbn() const {return bookNo;}
    virtual double  net_price(std::size_t n) const {return n * price;}
    virtual ~Quote() = default;

private:
    std::string bookNo;

protected:
    double price = 0.0;

};

class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string& b, double p, std::size_t q, double d): Quote(b, p), quantity(q), discount(d){}
    virtual double net_price(std::size_t n) const override = 0;

protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

class Bulk_quote : public Disc_quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc) : Disc_quote(b, p, q, disc) {}

    Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq){}

    Bulk_quote& operator =(const Bulk_quote& rhs){
        Disc_quote::operator =(rhs);
        return *this;
    }

    double net_price(std::size_t n) const override{};

    ~Bulk_quote() override {}
};