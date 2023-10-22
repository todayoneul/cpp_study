#include <iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    char end_state;
    do
    {
        cin >> s1 >> s2;
        if(s1 > s2){
            cout << s2 << endl;
        }else{
            cout << s1 << endl;
        }

        cout << "continue? (press Y / y)";
        cin >> end_state;
    } while (end_state == 'Y' || end_state == 'y');
    
    cout << "program ended" << endl;

    
}