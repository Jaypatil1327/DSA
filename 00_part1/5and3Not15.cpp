#include<iostream>
using namespace std ; 

int main(){
    int x ; 
    cout << "start " ; 
    cin >> x ; 

// using nested if 
    if((x % 5 == 0) || (x % 3 == 0)){
        cout << " " << endl ; 
        if(x % 15 == 0){
            cout << x << "divisible by 5 or 3 and also by 15" ; 
        }
        else  cout << x << " only divisble by 3 or 5 " ; 
    }
    else 
    cout << "Not divisble by 3 or 5" ; 

// // using logical operator 
//     if((x%5 == 0 || x % 3 == 0) && (x % 15 != 0)){
//         cout << x << " Its divisible by ( 5 or 3 ) nor 15 "; 
//     }
//     else 
//     cout << "condition not valid " ; 
}
