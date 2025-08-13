#include<iostream>
using namespace std ; 

void swap(int* x , int* y )
{
    int temp = *x ; 
    *x = *y;
    *y= temp ; 
}
int main()
{
    int x , y;

    int*p1 = &x ; 
    int*p2 = &y ; 

    cout << "Enter two val" << endl  ;
    cin >> x >> y ;  
    swap(p1,p2);

    cout << x << " " << y ; 

}