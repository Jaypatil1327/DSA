#include<iostream>
using namespace std ;

int main(){
    float princ_ipal ; 
    float rate ; 
    float time ; 
    float si ; 

    cout << "to calculate simple intrest : " << endl ; 
    cout <<" princ_ipal" << endl ; 
    cin >> princ_ipal ; 
    cout << "rate\n" ; 
    cin >> rate ; 
    cout << "time\n" ; 
    cin >> time ; 

    si = (princ_ipal * rate * time)/100 ; 
    cout << "simple interet\n " << si  << endl ; 
    cout << "total amount " << si + princ_ipal ; 

}