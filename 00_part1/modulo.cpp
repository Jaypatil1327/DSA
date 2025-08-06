#include<iostream>
using namespace std ; 

int main(){
    // b = divisor ;
    // a = divident 
    // a = b * q + r ; 

    int a ; 
    int b ; 

    cout <<"start " << endl ; 
    cin >> a >> b ; 

    // prop 1 ; a<b
 //  cout <<"prop :" <<  a%b  << endl ;

    // prop 2 : 
 //   cout <<"prop2 : " << a%b ; //----> b is neg ; 

    //prop 3 :
 //   cout << "prop3 : " << a%b ; //--------> a is neg 

    //prop 4 ; 
    cout << "prop4 : " << a%b ; //-------> both a , b are negative 
}