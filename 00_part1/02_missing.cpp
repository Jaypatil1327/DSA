#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,3,2,4} ; 
    vector<bool> temp (v.size()+1 , false) ; 

    for(int i = 0 ; i < v.size() ; i++ )
    {
        temp[v[i]] = true ; 
    }    
    for(int i = 0 ; i < temp.size() ; i++)
    {
        if(temp[i]==false)
        {
            cout << i ; 
            break; 
        }
    }
 return 0;
}