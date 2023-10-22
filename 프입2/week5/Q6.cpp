#include <iostream>
#include <vector>
using namespace std;

int Interface(){
    vector<int> ivec = {3,7,2,5,1,2,8,9,4,6};
    static int count = -1;
    count++;
    if(count > 9){
        count = count %10;
    }
    return ivec[count];
}

int main(){
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;
    cout << Interface() << endl;

}