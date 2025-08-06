#include<iostream>
using namespace std;

void fd_ld(int &x, int &a , int &b)
{
    a = x%10 ; 
    while(x>9)
    {
        x=x/10 ; // after last itration it not work so we declare first only ( > 9 ) bcz of 10
    }
    b=x ; 
}

int main()
{
    int n, a , b ; 
    cout << "Enter the num :";
    cin >> n ; 
    fd_ld(n,a,b);

    cout << a << " " << b ; 

 return 0;
}