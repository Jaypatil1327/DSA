#include<iostream>
#include<vector>

using namespace std ;

void subarray(int idx ,int n , int v[]  , vector<int> ans )
{
    if(idx==n)
    {
        for(int i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i] ; 
        }
        cout << endl ; 

        return ; 
    }

    subarray(idx+1 ,n,  v , ans ) ;

    if(ans.size()==0)
    {
        ans.push_back(v[idx]) ; 
        subarray(idx+1 ,n, v , ans );
    }
    else if(ans[ans.size()-1]==v[idx-1])
        {
            ans.push_back(v[idx]) ; 
            subarray(idx+1 ,n, v , ans );
        }
    }

int main()
{
    int arr[] = {1,2,3} ;
    vector<int> ans ; 
    int size = (sizeof(arr))/(sizeof(arr[0])) ; 
    subarray(0 ,size , arr, ans) ;  

}