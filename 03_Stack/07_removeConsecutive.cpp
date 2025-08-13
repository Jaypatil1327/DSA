#include<iostream>
#include<stack>
#include<algorithm>
using namespace std ;


int main(){
    stack<char> s ; 
    string str = "aaabbcddaabffg" ; 
    string ans = "" ; 

    for(int i = 0 ; i < str.length() ; i++){
        if(s.size()==0 || str[i] != s.top()) {
            s.push(str[i]) ; 
            ans+=str[i] ; 
        } 
    }

    cout << ans ; 
}