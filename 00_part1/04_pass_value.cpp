#include<iostream>
using namespace std ; 

void swap(int x , int y ){
    cout << "Enterd the swap fun \n" ; 
    int temp = x ; 
    x = y ; 
    y = temp ; 
    cout << x << " " << y << endl << "exit" << endl ; 
}

int main()
{
    int x , y ; 
    // int*p1 = &x ; 
    // int*p2 = &y ; 
    cout << "Enter \n" ; 
    cin >> x >> y ; 

    swap(x,y) ; 

    cout << x << " " << y ; 

    // no swaping will be done because new boxes are creted into swap fun() 
}