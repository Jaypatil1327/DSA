#include<iostream>
#include<unordered_set>
using namespace std ; 

void permute(string &str , int i) {

    if(str.length()-1 == i) {
        cout << str << endl ; 
        return ; 
    }
    unordered_set<char> s ; 
    for(int j = i ; j < str.length() ; j++) {
        
        if(s.find(str[j]) != s.end()) continue; 
        else s.insert(str[j]) ;  
        swap(str[i] , str[j]) ; 
        permute(str , i+1) ;
        swap(str[i] , str[j]) ; 
    } 

    return ; 
}
int main() {
    string str = "aba" ; 
    permute(str , 0) ; 
}