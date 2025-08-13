#include<iostream>
#include<vector>

using namespace std ; 

void mergeArray( vector<int>& v ,  vector<int>& v2  , vector<int>& ans)
{
    int i = 0 ; int j = 0 ; int k = 0 ; 

    while( i < v.size() ||  j < v2.size())
    {   
        if(i == v.size() || j == v2.size())
        {
            if(j < v2.size())
            {
                ans[k]=v2[j] ; j++ ; k++ ; 
            }
            else
            {
                ans[k]=v[i] ; i++ ; k++ ;
            }
        }

        else if(v[i]<v2[j])
        {
            ans[k] = v[i] ; i++ ; k++ ; 
        }
        else
        {
            ans[k] = v2[j] ; 
            j++ ; k++ ; 
        }
    }
}

int main()
{
    vector<int> v = {1,3,5,100 ,1000 } ; 
    vector<int> v2 = {2,5,7,8,9} ; 
    vector<int> ans ((v.size()+v2.size())) ; 
    mergeArray(v,v2,ans) ; 
    for(int ele : ans)
    {
        cout << ele << " " ; 
    }
}