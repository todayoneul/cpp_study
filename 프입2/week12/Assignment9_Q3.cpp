#include <iostream>
#include <set>

class Folder;

class Message {
    friend class Folder;
    friend void swap(Message &, Message &);
public:
    explicit Message(const std::string &str = "") : contents(str) {}
    
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    
    void save(Folder&);
    void remove(Folder&);
    void addFolder(Folder*);
    void remFolder(Folder*);
    void printFolders();
private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

void swap(Message&, Message&);

// Folder class 구현
class Folder {
    friend class Message;
    friend void swap(Message &, Message &);
    friend void swap(Folder &, Folder &);
public:
    Folder(const std::string &s ="") :Foldername(s){};
    Folder(std::string &s) : Foldername(s){};
    Folder(const Folder &);
    Folder &operator=(const Folder &);
    ~Folder();

    void printMessages();
private:
  std::set<Message *> messages;
  std::string Foldername;
  void addMsg(Message *);
  void remMsg(Message *);
  void add_to_Message(const Folder&);
  void remove_from_Message();
};

void swap(Folder &, Folder &);

//폴더가 가지고 있는 message set에 Message 객체들을 insert해줌
void Folder::addMsg(Message* m) {
    messages.insert(m);
}
//폴더가 가지고 있는 message set에서 Message 객체들을 erase해줌
void Folder::remMsg(Message* m) {
    messages.erase(m);
}
//
void Folder::add_to_Message(const Folder &f) {
    for (auto m : f.messages)
        m->addFolder(this);
}
//copy constructor 구현
Folder::Folder(const Folder &f) : messages(f.messages) { 
    add_to_Message(f);
}
//객체가 사라질때 copycontrol을 위해 구현
void Folder::remove_from_Message() {
    for (auto m : messages)
        m->remFolder(this);
}
//Destructor 정의
Folder::~Folder() { 
    remove_from_Message(); 
}
// copy control을 위한 operator= overload
Folder &Folder::operator=(const Folder &rhs) {
    remove_from_Message();
    messages = rhs.messages;
    add_to_Message(rhs);
    return *this;
}

//Q3_2 Folder 추가 함수 구현
void Message::addFolder(Folder* f){
    this->folders.insert(f);
}
//Q3_2Folder 제거 함수
void Message::remFolder(Folder* f){
    this->folders.erase(f);
}

void Message::save(Folder &f){
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f){
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &m){
    for(auto f: m.folders)
        f->addMsg(this);
}

Message::Message(const Message &m): contents(m.contents), folders(m.folders){
    add_to_Folders(m);
}

void Message::remove_from_Folders(){
    for(auto f : folders)
        f->remMsg(this);
    folders.clear();
}

Message::~Message(){
    remove_from_Folders();
}

Message& Message::operator=(const Message &rhs){
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void swap(Message &lhs, Message &rhs) 
{
    using std::swap;
    lhs.remove_from_Folders(); 
    rhs.remove_from_Folders(); 
    
    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);
    
    lhs.add_to_Folders(lhs); 
    rhs.add_to_Folders(rhs);  
}

void swap(Folder &lhs, Folder &rhs) 
{
    using std::swap;
    lhs.remove_from_Message();
    rhs.remove_from_Message();

    swap(lhs.messages, rhs.messages);
    
    lhs.add_to_Message(lhs);
    rhs.add_to_Message(rhs);
}

// Message contents(내용) 출력 함수
void Folder::printMessages() {
    if (Foldername == "" && (*messages.begin())->contents=="" && messages.size()==1 ){
        std::cout << "This " << Foldername << "folder is empty and has no name \n" << "please check the Foler and Mail" << std::endl;
    }
    else{
        std::cout << "Messages in "<< Foldername <<" folder:\n";
        for (auto m : messages) {
            std::cout << "\tMessage contents: " << m->contents << std::endl;
        }
    }
    std::cout << std::endl;
}

void Message::printFolders(){
    std::cout << "This message is in ";
    for(auto i : folders){
        std::cout<<"\""<< i->Foldername <<"\""<<" File ";
    }
    std::cout << std::endl;
}

int main(){
    Message msg1("Hello, world!");
    Message msg2("How are you?");
    Message msg3;
    Message msg4("cpp exercise"); // Assignment folder와 Study plan folder에 save
    Message msg5("ML, DataBase");
    Message msg6("Application dev -> ios - swift, objectiveC(C++), cross platform - kotlin, Flutter, react Native");
    Message msg9("Assignment 9_Q3");
    Message msg10("coded by leegyuhan");


    Folder folder1("Hello"), 
            folder2("Assingnment"), 
            folder3("StudyPlan"), 
            folder4;

    //기본 기능 테스트
    msg1.save(folder1);
    msg2.save(folder1);

    msg3.save(folder4);

    msg4.save(folder2);
    msg4.save(folder3);
    
    msg5.save(folder3);
    msg6.save(folder3);
    msg9.save(folder2);
    msg10.save(folder2);


    msg1.printFolders();
    msg2.printFolders();
    msg4.printFolders();

    folder1.printMessages();
    folder2.printMessages();
    folder3.printMessages();
    folder4.printMessages();

    std::cout << "---Check remove function---\n" << std::endl;
    msg1.remove(folder1);
    msg5.remove(folder3);
    msg4.remove(folder2);

    folder1.printMessages();
    folder2.printMessages();
    folder3.printMessages();
    folder4.printMessages();

    std::cout<< "---Check Copycontrol---\n" << std::endl;
    msg4.addFolder(&folder1);
    msg4.printFolders();
    folder1.printMessages();
}
