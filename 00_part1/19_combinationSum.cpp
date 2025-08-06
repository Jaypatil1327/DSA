#include<iostream>
#include<vector>

using namespace std ;
void combination(vector<int> v , vector<int> ans , int target , int idx )
{   
    if(target==0)
    {
        for(int i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i] << " " ; 
        }
        cout << endl  ; 
        return ; 
    }
    if(target < 0 ) return ; 

    for(int i = idx ; i < v.size() ; i++)
    {   
        ans.push_back(v[i]) ; 
        combination(v , ans , target-v[i] , i ) ; 
        ans.pop_back() ; 
    }
}
int main()
{
    vector<int> v  = {2,3,5};

    combination(v , {} , 8 , 0) ; 
}