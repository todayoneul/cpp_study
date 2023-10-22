#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    string filename = "/Users/gyuhan/Desktop/test.txt";
    vector<string> svec;
    
    ifstream in (filename);
    
    if(in.is_open()){
        string line;
        // while(getline(in,line)){
        //     svec.push_back(line);
        // }
        while (getline(in,line))
        {
            istringstream is(line);
            string word;
            while (is >> word)
            {
                svec.push_back(word);
            }
             
        }
        
        in.close();
    }
    else{
        cerr << "unable to open this file " << filename << endl;
        return 1;
    }

    for(const string & word : svec){
        cout << word << endl;
    }


}