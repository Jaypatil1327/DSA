#include<iostream>
#include<algorithm>
#include<string>

using namespace std ; 

int main(){
    int n ;  
    int rev  = 0 ; 
    cout << "Enter " ; 
    cin >> n ;
    int last_digit = 0  ; 

    // while(n != 0){
    //     rev = rev * 10;
    //     last_digit = n % 10 ;  
    //     rev = rev + last_digit ;  
    //     n = n/10 ;    

    // }  
    //  cout << rev ; 

    //method 2 ;

    string s = to_string(n) ; 
    reverse(s.begin() , s.end()) ; 
    cout << stoi(s) ; 
}