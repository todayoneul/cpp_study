#include <iostream>
#include <map>
#include <utility>

int main(){
    int sid[] = {1,2,3,4,5,6};
    int sc[] = {100,91,23,19,43,32};
    std::map<int,int> st_sc;
    for(int i=0; i<6 ; ++i){
        st_sc[sid[i]] = sc[i];
    }
    int find_id = 3;
    if(st_sc.find(find_id) != st_sc.end()){
        std::cout << "stdent ID " << find_id << ", score: " << st_sc[find_id];
    }else{
        std::cout << "no student id" << find_id;
    }
}
