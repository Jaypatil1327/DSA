#include<iostream>
#include<set>

using namespace std ; 

int main(){
    set<int> s ;

    s.insert(1) ; 
    s.insert(10) ; 
    s.insert(5) ; 
    s.insert(3) ; 

    // Its an Ordered set : 
    
    for(auto i : s){
        cout << i << " " ; 
    }  
}