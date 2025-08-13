#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the number : " ;
    cin >> n ;

// // METHOD 1 ; 
//     // maths d = -3  ; n = ? ; a = 100 ; a_n = ? ; 
//             // from solving the eqn  
//             // formmula := a+(n-1)d > 0 
//     // n < 34.33 

//     int a = 100 ; 
//     for(int i = 1 ; i <= 34; i++)
//     {
//         cout << a << endl ; 
//         a = a-3 ; 
//     } 

// // METHOD 2 ; 
//     for(int a = 100 ; a>0 ; a-=3){
//         cout << a ; 
//     }

//METHOD 3 (BY ME)
    for(int i = 1 , a = 100 ; i <= n ; i++){
        if(a>0){
        cout << a << endl  ; 
        a = a - 3 ; 
        }

        else break; 
    } 
}    