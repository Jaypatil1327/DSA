#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std ; 

bool set_rules(int a , int b){
    if(a < b) {                    
        return false ; 
    }
    else true ;

    // aagar next element Greater hai toh return false jo ki mera unko swap karna padega Q ki need it in reverse order 

    // rule : aagaer swap karna hai to return false 
    // else return True kardo ::: 
}
int main(){
    vector<int> v = {14,5,4,56,7,78,3,3,788,2} ; 

    sort(v.begin() , v.end() , set_rules) ;  

    for(int ele : v) cout << ele << " " ; 
}