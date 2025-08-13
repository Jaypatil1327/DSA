#include<iostream>
#include<vector> 

using namespace std ;

void subset2(int idx, vector<int> v, vector<int> ans, bool flag) {

    if(idx==v.size())
    {
        for(int i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i] ;
        }
        cout << endl ; 
        return ; 
    }

    if(idx==v.size()-1)
    {
        if(flag==true ) subset2(idx+1 , v , ans , true) ; 
        ans.push_back(v[idx]) ; 
        subset2(idx+1 , v , ans , true) ;
        return  ; 
    }

    else if(v[idx] == v[idx+1])
    {
        if(flag == true) subset2(idx+1 , v , ans , true) ; 
        ans.push_back(v[idx]); 
        subset2(idx+1 , v , ans , false) ;
    }
    else
    {
    if(flag==true ) subset2(idx+1 , v , ans , true) ; 
    ans.push_back(v[idx]) ; 
    subset2(idx+1 , v , ans , true) ;
    }
}

int main()
{
    vector<int> v = {1,2,2} ; 
    vector<int> ans ; 

    subset2(0 , v , ans , true) ; 
}