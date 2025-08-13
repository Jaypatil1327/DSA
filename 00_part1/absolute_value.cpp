#include<iostream>
using namespace std ; 
// Absolute value is only postive 
int main(){
    
    float x ;
    cout << "Enter \n" ; 
    cin >> x ; 
// abs(x) - x 
    if(x < 0 ){
        int y = ((int)x - 1) ; 
        x = -(y - x) ; 
        cout << x ; 
    }
// (int)x - x 
    else 
    cout << x-(int)x ; 
}     