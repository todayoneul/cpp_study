#include <iostream>
#include <forward_list>
using namespace std;

void insert_forward_list(forward_list<string>&fsl, string& a,string& b){
    auto prev = fsl.before_begin();
    auto curr = fsl.begin();
    bool inserted = false;
    while (curr != fsl.end())
    {
        if(*curr == a){
            fsl.insert_after(curr,b);
            inserted = true;
            break;
        }
        else{
            prev =curr;
            ++curr;
        }
    }
    if(!inserted){
        fsl.insert_after(prev,b);
    }
}

int main(){
    forward_list<string> f_sl = {"cpp" , "python","apple"};
    string a = "eka";
    string b = "django";
    insert_forward_list(f_sl,a,b);

    for(auto i : f_sl){
        cout << i << " ";
    }

}