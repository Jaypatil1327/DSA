#include<iostream>
using namespace std ;

void Address(int x , int y)
{
    cout << endl << endl <<"hii from the function \n" ; 
    cout << "Address of x : " << &x << endl ; 
    cout << "Address of y : " << &y << endl ; 
    // they both are totally diffren bcz new box is created for the adress fun 
}

int main()
{   
    int x ;
    int y ; 
    cout << "Address of x : " << &x << endl ;
    cout << "Address of y : " << &y << endl ; 
    // address create in the main function ; 
    
    Address(x,y) ; 


}