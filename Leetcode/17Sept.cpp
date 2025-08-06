#include<iostream>
#include<vector>

using namespace std ; 

void uncomman(vector<string> &checker , string s) {
    string str1 = s ; 
    int i = 0 ; 

    while(i < str1.length()){
        string s ; 
        while(str1[i] != ' ' && i < str1.length()){
            s+=str1[i] ; i++ ; 
        }
        i++ ; 
        
        bool flag = false ; 

        for(int i = 0 ; i < checker.size() ; i++) {
            if(checker[i] == s) {
                checker[i] = "0" ; 
                flag = true ; 
            } 
        }

        if(!flag){
            checker.push_back(s) ; 
        }
    }
}

int main() {
    string  s1 = "apple apple", s2 = "banana" ;

    vector<string> checker ; 
    
    uncomman(checker , s1) ; 
    uncomman(checker , s2) ;

    for(string ele : checker) {
        if(ele == "0") continue; 
        else {
            cout << ele << " " ; 
        }
    } 

}