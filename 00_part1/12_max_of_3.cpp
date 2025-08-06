#include<iostream>
using namespace std ; 

int maxofthree(int i = 0 , int j = 0 , int k = 0 )
{
    if(i>j && i>k) return i ; 
    else if(j>k) return j ; 
    else return k ; 
    
}

int main()
{
    int a , b , c ; 
    cout << "Enter num 1 : " ; 
    cin >> a ; 
    cout << "Enter num 2 : " ; 
    cin >> b ; 
    cout << "Enter num 3 : " ;   
    cin >> c ; 

    cout << maxofthree(a,b,c) ; 

}