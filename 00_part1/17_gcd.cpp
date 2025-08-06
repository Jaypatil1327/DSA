#include<iostream>
#include<string>
#include<algorithm>

using namespace std ; 

int gcd_ans(int min , int max)
{   
    if(min==0) return max ; 
    gcd_ans(max%min , min) ; 

}

int main()
{
    int num1 ; 
    int num2 ; 
    cin >> num1 >> num2 ; 
    int gcd = gcd_ans(min(num1,num2) , max(num1,num2)) ;
    cout << gcd ; 
}