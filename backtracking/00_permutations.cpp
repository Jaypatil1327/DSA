#include<iostream>
using namespace std ; 

void f(string input , string output) {

    if(input == "") {
        cout << output << endl ; 
        return ; 
    }

    for(int i = 0 ; i < input.length() ; i++) {
        char ch = input[i] ; 

        // string str = "" ; 
        // for(int i = 0 ; i < input.length() ; i++) {
        //     if(input[i] == ch) continue;
        //     else str+=input[i] ; 
        // }
        
        f(input.substr(0 , i) + input.substr(i+1) , output+ch) ; 
    }
    return ;
}
int main() {
    f("abc" , "") ; 
    return 0; 
}