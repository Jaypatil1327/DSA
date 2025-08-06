#include<iostream>
#include<cmath> // for pow , sqrt , 
#include<algorithm> // for swap , 

using namespace std ; 

int main()
{
    // using sqrt function 
    cout << sqrt(12) << endl  ; // we are calling built in fun of cpp

    // using of min max function 
    cout << "min " <<  min(12 , 14) << endl ; 
    cout << "max " <<  max(14 , 20) << endl ; 

    // using of pow 

    cout << "pow " << pow(3.4641 , 2) ; 

    // using of swap 
    
    int a = 12 , b = 14 ; 
    cout << "before swap\n" << a << " " << b  << endl ;  
    cout << " after " << endl ; 
    swap(a , b ) ; 
    cout << a << " " << b  << endl ; 

}