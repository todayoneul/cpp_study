# include <iostream>
using namespace std; 

struct food
{
    string name;
    int weight;
    double price;
};
food chips, drinks;

int main(){
    chips.name ="MD";
    chips.price = 1500;
    chips.weight = 150;
    cout << chips.name<< endl;
    cout <<chips.price << endl;
    // string inputs;
    // while (getline(cin,inputs)){
    //     if (!inputs.empty()){
    //         cout << inputs << endl;
    //     }else{break;}
    // }
    string str("Hello, World~!");
    
    for ( auto c : str){
        cout << c << endl;
    }
}
