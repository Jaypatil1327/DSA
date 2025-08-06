#include<iostream>
using namespace std ; 

int main(){
    int x  ; 
    cout << "Enter the num \n" ; 
    cin >> x ; 

    if(x > 0 ){
        if(x % 5 == 0 ){
            cout << "its divisible by 5 \n" ; 
        }
        else 
        cout << "positive but not divisble" ; 
    }
    
    else cout << "its not divisble by 5 " ; 
}