#include<iostream>
#include<unordered_set>

using namespace std ; 


int main(){
    unordered_set<int> s ; 

    s.insert(10) ;
    s.insert(20) ;
    s.insert(30) ;
    s.insert(40) ;
    s.insert(10) ;
    s.insert(10) ;

    // Print the Set : 

    for(int i : s) cout << i << " " ; 
    cout << endl ; 

    // To find Element in Set 
    //  .... the .end() is like an iterator in set till the last     value  and default returns it 


    if(s.find(100) != s.end()) cout << "it exists "; 
    else {
        cout << "Does not exists " ; 
    }
} 