#include<iostream>
#include<string> 
#include<vector>

using namespace std ;

string per(int k , int n , string str , string ans)
{
    if(n==0) return ans ; 

    int fact = 1 ; 
    for(int i = 2 ; i<=n ; i++)
    {
        fact*=i ; 
    }
    int idx = k/idx ; 
    if(k%fact==0) idx-- ; 

    char ch = str[idx] ; 
    ans+=ch ; 

    if(k%fact==0) q=fact ; 
    else q = k/fact ; 

    per(idx , n-1 , )
}

int main()
{
    int n ; 
    string str ; 
    cin >> n ; 
    for(int i = 1 ; i <= n ; i++)
    {
        str+=to_string(i) ; 
    }
    cout << str ; 

    int k ; 
    cin >> k ; 


}