#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    vector<int> v ; 
    
    v.push_back(2) ; 
    v.push_back(4) ; 
    v.push_back(8) ; 
    v.push_back(10) ; 
    v.push_back(12) ; 
    v.push_back(16) ; 
    v[6] = 18 ; 
    v[7] = 20 ; 

    for(int i = 0 ; i <= 7 ; i++)
    {
        cout << v[i] << " ";
    }

}