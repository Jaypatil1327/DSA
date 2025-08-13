#include<iostream>
using namespace std ; 

int main()
{   
    int x ;

    cout << "Enter the data type to find into bytes \n" ; 
    cout << "int : 1 \n" ;
    cout << "char : 2 \n" ;
    cout << "bool : 3 \n" ;
    cout << "int : 4 \n" ;
    cout << "for customizied byte : 5 \n" ; 
    cout << "ENTER : " ; 
    cin >> x ; 

   switch(x){
    case 1 :
        cout << sizeof(int)*8  ; 
        break;
    
    case 2 : 
        cout << sizeof(char)*8 ; 
        break ; 
    
    case 3 : 
        cout << sizeof(bool)*8 ; 
        break ; 

    case 4 : 
        cout << sizeof(float)*8 ; 
        break ; 
    case 5 : 
        int n ; 
        cout << "Enter your byte :" ; 
        cin >> n ;
        cout << n*8 ; 
        break; 
      
    default :
        cout << "enter num between 1 - 4 " ; 
   }

}