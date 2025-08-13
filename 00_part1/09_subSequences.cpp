#include<iostream>
#include<vector> 

using namespace std ; 

void subset(int idx , vector<int> &v , vector<int> temp , vector<vector<int>> &ans , int k )
{   
    if(idx==v.size())
    {   
        if(temp.size()== k){
        ans.push_back(temp) ;
        } 
        return ; 
    }
    if(temp.size() + (v.size()-idx) < k ) return ; 
    subset(idx+1 , v , temp , ans, k); 
    temp.push_back(v[idx]) ; 
    subset(idx+1 , v , temp , ans , k );
}

int main()
{
    vector<int> v = {1,2,3,4} ; 
    vector<int> temp ; 
    vector<vector<int>> ans ;
    int k ; 
    cout << "Enter the length of subsequences :" ; 
    cin >> k ; 
    subset(0,v,temp , ans , k ) ; 

    for(int i = 0 ; i < ans.size() ; i++)
    {
        for(int j = 0 ; j < ans[i].size() ; j++)
        {
            cout << ans[i][j] << " " ; 
        }
        cout << endl ; 
    }
}