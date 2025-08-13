#include<iostream>
#include<vector>
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

    cout << "/n" ; 
    input(v1) ;

    vector<int> v2 (v1.size());

    for(int i = 0 ; i <= v2.size()-1 ; i++)
    {
        // i+j = size-1 ; 

        v2[i]= v1[v1.size()-1-i]; 
    }

    dis(v2);
    
 return 0;
}