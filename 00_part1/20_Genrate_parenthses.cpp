#include<iostream>
#include<vector>

using namespace std ;

void gen(int open , int close , int n  , string str)
{
    if(open == n && close == n)
    {
        cout << str ;
        cout << endl ; 
        return ; 
    }
    if(open>n) return ; 

    else if(open >= close) 
    {   
        gen(open+1 , close , n , str+'(') ; 
        gen(open , close+1 , n , str+')') ; 
    } 
}

int main()
{
    int n = 1 ; 
    gen(0,0,n,"") ; 

}