#include <iostream>
#include <string>
#include <vector>
using namespace std;
//redo Q9 using iterator
int main(){
    int input;
    vector<int> ivec;
    vector<int> sumlist1;
    vector<int> sumlist2;

    while(cin >> input){
        ivec.push_back(input);
    }
    for(auto it = ivec.begin(); it != ivec.end(); ++it){
        for(auto it2 = it+1 ; it2 != ivec.end(); ++it2){
            sumlist1.push_back(*it + *it2);
        }
    }

    for(auto k : sumlist1){
        cout << k << " ";
    }
    cout << endl;
    
    auto it3 = ivec.begin();
    auto it4 = ivec.end()-1;
    for(int i=0; i< ivec.size()/2; ++i,++it3, --it4){
        sumlist2.push_back(*it3 + *it4);
    }

    for(auto l : sumlist2){
        cout << l << " ";
    }
    cout << endl;
}
