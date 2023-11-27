#include <memory> //allocator를 사용하기 위해
#include <algorithm> //pair를 사용하기 위해
#include <iostream>

// newString 구현해야 할 것들
// 1.newString 객체의 생성
// 2. copy control
// 3. .size()-> return size_t , .length() -> return size_t
// 4. 문자열이 시작하는 위치와 끝나는 위치가 필요
// 5. 문자열 출력

class newString{
public:
    newString():newString(""){};
    newString(const char* );
    newString(const newString& );
    newString& operator=(const newString& );
    ~newString();
    const char* return_string() const {return start;}// 문자열 반환 
    size_t size() const {return end - start;} // null 포홤 크기 반환
    size_t length() const {return end - start - 1;} // 문자열 길이 반환

private:
    std::pair<char*, char*> make_str(const char*, const char*); // c_type char 배열을 string으로 만들기 위한 함수
    void start_end_init(const char*, const char*); // start와 end 초기화
    void free();
    char* start; //시작 char 위치를 가르키는 pointer
    char* end; //끝 char 위치를 가르키는 pointer
    std::allocator<char> alloc; //char type 동적 메모리 컨테이너 선언
};

//두개의 const char* 를 받아 두개의 위치의 차이만큼 str의 크기로 allocate 시켜주고, 두개의 char 배열을 원소로 가지는 pair를 return하는데
//첯번째 원소는 문자열 배열을, pair의 두번째 원소는 str에 원소를 b부터 e까지의 char를 복사한후의 e 다음을 가르키는 pointer를 반환함
std::pair<char*, char*> newString::make_str(const char* b, const char* e){
    auto str = alloc.allocate(e - b);

    return{str, std::uninitialized_copy(b, e, str)};
}

// start와 end 초기화 
void newString::start_end_init(const char* first, const char* last){
    auto newstr = make_str(first, last);
    start = newstr.first;
    end = newstr.second;
}
//string constructor - char 배열의 크기만큼 시작과 끝을 초기화시켜줌
newString::newString(const char* s){
    char* sl = const_cast<char*>(s);
    while (*sl)
        ++sl;
    start_end_init(s, ++sl);
}

//copy constructor 정의
newString::newString(const newString& rhs){
    start_end_init(rhs.start, rhs.end);
}

//string 객체를 destruct 하기 위해 allocator에 할당했던 메모리를 반환
void newString::free(){
    if (start) {
        start = end = nullptr; // string 객체를 만들때 이용한 pointer들을 nullptr로 초기화해줌
        alloc.deallocate(start, end - start); //allocator의 메모리를 해체해줌
    }
}
//string 객체 destruct
newString::~newString(){
    free();
}

//copy-assignment
newString& newString::operator=(const newString &rhs){
    auto newstr = make_str(rhs.start, rhs.end);
    free();
    start = newstr.first;
    end = newstr.second;
    return *this;
}

int main(){
    newString s1("hello");
    newString s2;
    s2 = s1;
    std::cout << s1.return_string() << std:: endl;
    std::cout << s1.length() << " " << s1.size() << std::endl;
    std::cout << s2.return_string() << std:: endl;
    std::cout << s2.length() << " " << s2.size() << std::endl;
    

}