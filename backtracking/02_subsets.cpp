#include<iostream>
using namespace std ; 

void getSubsets(string str , int idx , string temp) {
    if(str.length() <= idx) {
        cout << temp << " " ; 
        return ; 
    }
    getSubsets(str , idx+1 , temp+str[idx]) ; 
    getSubsets(str , idx+1 , temp) ; 
}
int main() {
    cout << " { } " ; 
    getSubsets("abc" , 0 , "") ; 
}