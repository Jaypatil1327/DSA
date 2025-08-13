#include<iostream>
#include<vector>

using namespace std ; 

void store_vector(int idx , vector<int>& v , vector<int> ans , vector<vector<int>> &final) 
{   
    if(idx == v.size())
    {
        final.push_back(ans) ; 
        return ; 
    }

    store_vector(idx+1 , v , ans  , final);
    ans.push_back(v[idx]) ; 
    store_vector(idx+1 , v , ans , final ) ;    
}

int main()
{
    vector<int> v ; 
    vector<int> ans;
    v.push_back(1) ;
    v.push_back(3) ;
    v.push_back(2) ; 

    vector<vector<int>> printer ; 
    store_vector(0 , v , ans , printer);

    for(int i = 0 ; i < printer.size() ; i++)
    {
        for(int j = 0 ; j < printer[i].size() ; j++)
        {
            cout << printer[i][j] << " " ; 
        }
        cout << endl ; 
    }
}