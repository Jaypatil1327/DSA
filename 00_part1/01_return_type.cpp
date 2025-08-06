#include<iostream>
using namespace std ; 
int sum(int x , int y ){
    return x + y ; 
}
int main()
{   
    int x , y ; 
    cout << "Enter" ; 
    cin >> x >> y  ; 
    cout << sum(x , y) ; 
}