#include<iostream> 
using namespace std ;

void fun(int x = 0 , float y = 12.12)
{
    cout << x << " \n"  << y << endl ; 
}

int main()
{
    
    fun(12.22) ; 
    // it has typcasted and interachnage its value with x element of fun 
}