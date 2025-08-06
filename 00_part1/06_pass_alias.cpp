#include<iostream>
using namespace std ;

void swap(int &x , int &y)
{
    int n = x ; 
    x= y ; 
    y= n; 
}

int main()
{
    int x , y ; 
    cout << "Enter two num \n" ; 
    cin >> x >> y ; 

    int *p1 = &x ; 
    int *p2 = &y ; 
    swap(*p1 , *p2);

    cout << x << " " << y ; 

}