#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cout << "Enter the number \n" ; 
    cin >> n ; 

    int product = 1 ; 

    for(int i = 1 ; i <= n ; i++ ){
        // cout << "factorial of " << i << " is " << product << endl  ; 
        product*=i ; 
        cout << "factorial of " << i << " is " << product << endl  ;
    }
     
}