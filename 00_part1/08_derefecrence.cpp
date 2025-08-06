#include<iostream>
using namespace std;
int main()
{
    int x=12 ; 
    int* ptr = &x ;

   cout << x << endl; 
//    cout << &x << endl ; 

   cout << ptr << endl ;
    
//    ptr++ ;
//    cout << ptr << endl ; 

//    cout << *ptr << endl  ; // its will give garbage value 
 
//    cout << *ptr ; 

    (*ptr)++ ; // always use the ()into braces to update the values 

    cout << *ptr ; 

 return 0;

}