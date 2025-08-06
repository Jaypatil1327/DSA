#include<iostream>

using namespace std ; 

double mypow(double x , int n)
{   
    if(x==0) return 0 ; 
    if(n==0) return 1 ; 
    if(n==1) return x ; 

    bool flag = true ; 
    if(n<0)
    {
        flag=false ; 
        n = -(n) ; 
    }

    double ans = mypow(x , n/2) ; 

    if(n%2==0)
    {
        if(flag==false)
        {
            return 1/(ans*ans); 
        }
        else return ans*ans ; 
    }
    else
    {
        if(flag==false)
        {
            return 1/(ans*ans*x) ; 
        }
        else return ans*ans*x ; 
    }
}

int main()
{
    cout << "Enter the base and power " ; 
    double base ; 
    int pw ; 
    cin >> base >> pw ; 
    cout << mypow(base,pw) ; 
}