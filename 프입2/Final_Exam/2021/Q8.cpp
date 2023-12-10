#include <iostream>

int main(){
    int** p = new int*[5];
    for(int i =0; i<5; ++i){
        p[i] = new int[10];
        for(int j =0; j <10; ++j){
            p[i][j] = i*10+j;
        }
    }
    for(int i =0 ; i<5 ; ++i){
        for(int j =0 ; j<10; ++j){
            std::cout << p[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for(int i=0; i<5 ; ++i){
        delete[] p[i];
    }
    delete[] p;
}