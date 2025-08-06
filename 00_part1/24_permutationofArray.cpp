#include<iostream>
#include<vector>

using namespace std ; 

void permutation(vector<int> v , vector<vector<int>> &final , vector<int> ans )
{   
    if(v.size()==0)
    {
        final.push_back(ans) ; 
        return ; 
    }
    for(int i = 0 ; i < v.size() ; i++)
    {   vector<int> temp ; 
        for(int j = 0 ; j < v.size() ; j++)
        {
            if(v[i]==v[j])ans.push_back(v[i]) ; 
            else temp.push_back(v[j]) ;
        }
        permutation(temp , final , ans) ; 
        ans.pop_back();
    }
}

int main()
{
    vector<int> v = {1,2,3,4} ; 
    vector<vector<int>> final ; 
    permutation(v,final ,{}) ; 

    for(int i = 0 ; i < final.size() ; i++ )
    {
        for(int j = 0 ; j < final[i].size() ; j++)
        {
            cout << final[i][j]  << " ";
        }
        cout << endl ; 
    }
    

}