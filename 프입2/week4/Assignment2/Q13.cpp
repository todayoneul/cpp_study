#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // vector<unsigned> scores(11,0);
    // unsigned grage;
    // while (cin >> grage)
    // {
    //     if(grage <= 100)
    //         ++scores[grage/10];
    // }
    // for(auto& i : scores){
    //     cout << i << " ";
    // }

    vector<unsigned> scores2(11,0);
    unsigned grade;
    while (cin >> grade)
    {
        std::vector<unsigned>::iterator it = scores2.begin();
        if(grade <= 100){
            ++(*(it+=(grade/10)));
        }
    }
    
    for(auto& i : scores2){
        cout << i << " ";
    }
}

