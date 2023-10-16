#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>&input, int size);

int main(){
    int data;
    vector<int> input;
    //non-number(non-int) data가 들어올때까지 입력받기
    while (cin >> data)
    {
        input.push_back(data);
    }
    
    bubbleSort(input,input.size());
    // iterator를 이용한 이중 for문 구현 
    for (int i=0; i<5; i++){
        cout << input[i] << " ";
    }

}

void bubbleSort(vector<int>&input, int size){
    for (int i =0; i < size - 1; i++){
        for (int j =0; j<size-i-1; j++){
            if(input[j]>input[j+1]){
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}