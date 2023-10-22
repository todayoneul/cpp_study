#include <iostream>
#include <string>
using namespace std;

int main(){
    string in;
    string input;
    while (getline(cin,in))
    {
        input += in;
    }

    int cnt=0;
    int cnt_voewl =0;
    for(char ele : input){
        if (ele == 'a'||ele == 'A'){
            cnt_voewl++;
        }
        else if(ele == 'e'||ele == 'E'){
            cnt_voewl++;
        }
        else if(ele == 'i' || ele == 'I'){
            cnt_voewl++;
        }else if (ele == 'o' || ele == 'O'){
            cnt_voewl++;
        }else if (ele == 'u'|| ele =='U'){
            cnt_voewl++;
        }else if(ele == '\n' || ele == ' ' || ele=='\t'){
            cnt++;
        }
        else{
            continue;
        }
    }
    cout << cnt_voewl << " " << cnt << endl;

}