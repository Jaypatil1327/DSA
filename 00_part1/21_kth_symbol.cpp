#include<iostream>
#include<vector>

using namespace std ;
// this code has "TC" of 2^n-1 ; 
void demo(vector<int> &v , int num , int track , int rt , int calls )
{   
    if(track==num)
    {
        v.push_back(rt) ; 
        return ; 
    }
    if(calls==0)
    {
        demo(v , num , track+1 , 0 , 0);
        demo(v , num , track+1 , 1 , 1);
    }
    else
    {
        demo(v , num , track+1 , 1 , 1);
        demo(v , num , track+1 , 0 , 0);
    }
}

int dem0(int n , int k ) // best code with "TC" = O(n) ; 
{ 
    if(n==1) return 0 ; 

    if(k%2==0)
    {
        int ans = dem0(n-1 , k/2) ; 

        if(ans==0) return 1 ;
        else return 0 ; 
    }
    else 
    {
        int ans = dem0(n-1 , (k/2)+1) ;
        return ans ; 
    }
}

int main()  
{
    int num = 4 ;
    vector<int> v ; 

    // demo(v,num,1,0,0) ; 
    int k =  2 ; 

    cout << dem0(4,2); 
}