#include<iostream>
#include<map>

using namespace std ; 

int main(){
    map<char , int> map ;

    map['a'] = 10 ; 
    map['c'] = 40 ; 
    map['a'] = 1000 ; 
    map['d'] = 20 ; 
    map['b'] = 20 ; 

    // Its an Ordered Map : 
    
    for(auto i : map){
        cout << i.second << " " ; 
    }  
}