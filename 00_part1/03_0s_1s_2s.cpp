#include<iostream>
#include<vector>
using namespace std ; 
// method 1 


void output(vector<int> &a)
{
    for(int i = 0 ; i <= a.size()-1 ; i++)
    {
        cout << a.at(i) << " "; 
    }
    cout << endl ; 
}

int main()
{
    vector<int> v ; 

    v.push_back(2); 
    v.push_back(0); 
    v.push_back(2); 
    v.push_back(1); 
    v.push_back(1); 

    int noz = 0 ; 
    int noo = 0 ; 
    int now = 0 ;

    for(int i = 0 ; i <= v.size()-1 ; i++)
    {
        if(v[i]==0) noz++ ; 
        else if(v[i]==1) noo++ ;   
        else if(v[i]==2) now++ ;   
    }
    
    int total = noo + noz + now ; 
    for(int i = 0 ; i<=v.size()-1 ; i++)
    {
        if(i<noz) v[i] = 0 ; 
        else if(i<(noz+noo)) v[i] = 1 ; 
        else v[i] = 2 ; 
    }
    output(v) ; 

}

