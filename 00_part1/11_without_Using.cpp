#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 

// display of array 
void dis(vector<int> &v)
{
    for(int i = 0 ; i<=v.size()-1 ; i++)
    {
        cout << v[i]  << " "; 
    }
}

// for taking input of array 
void input(vector<int> &v)
{
    for(int i = 0 ; i<=4 ; i++)
    {   
        int x ; 
        cin >> x ;
        v.push_back(x); 
    }
}

int main()
{
    vector<int> v1 ;
    input(v1) ;

// using two pointer concept 
   
    int i = 0 ; 
    int j = v1.size()-1 ;

    while(j>=i)
    {
        int temp = v1[i] ;
        v1[i] = v1[j] ;  
        v1[j] = temp ; 

        i++ ; 
        j-- ; 
    }

    // reverse(v1.begin(),v1.end());
    dis(v1) ; 


}