#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<string> svec;

    string input;
    //string형의 input이 들어올때까지 무한히 입력을 받기 때문에 마지막 단어 입력 이후 엔터키를 입력하고 control + d 키를 이용해 EOF로 쉘 종료
    while (cin>>input)
        svec.push_back(input);
    vector<int> countRepeat(svec.size(),1);

    int maxCount;
    string repeatdWord;
    int cnt =1;

    for(int i=0; i< svec.size()-1; i++){
        string tempword = svec[i];
        maxCount = *max_element(countRepeat.begin(),countRepeat.end());
        if (i>0){
            string prevWord = svec[i-1];
            if(tempword != repeatdWord && tempword != prevWord){
                for(int j=i+1; j < svec.size()-1-i; j++){
                    if(tempword == svec[j])
                        cnt++;
                }
            }
            if(cnt != 1 && cnt > maxCount)
                repeatdWord = tempword;
        }
        
        else{
            repeatdWord = tempword;
            for(int j=i+1; j < svec.size()-1-i; j++){
                if(tempword == svec[j])
                    cnt++;
            }
        }
        countRepeat[i] = cnt;
        cnt = 1;
    }
    if (maxCount == 1)
        cout << "No word was repeated";
    else{
        cout << "Most duplicated word : " << repeatdWord <<endl;
        cout << "It occurred "<< maxCount << " times." << endl;
    }


}
