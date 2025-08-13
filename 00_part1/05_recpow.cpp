#include<iostream>
using namespace std ; 

double poww(double x, int n) {
        if(n==1) return x ; 
        if(n==0) return 1 ; 
        return x*poww(x,n-1) ; 
}
// //log pow function
// float pow2(int x , float n)
// {
//     if (n==0) return 0 ; 
//     if (n==1) return x ; 

//     float ans = pow2(x , n/2) ;  

//     if(n%2==0)
//     {  
//         return ans*ans ; 
//     } else if (n %2!=0)
//     {
//         return ans*ans*x ; 
//     }
// }

int main()
{
    cout << "enter the base and pow" ; 
    double base ; 
    int pow ; 
    cin >> base >> pow ; 

    cout << poww(base , pow);
}