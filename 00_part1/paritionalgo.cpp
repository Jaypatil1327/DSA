#include<iostream> 
#include<string> 
#include<vector> 

using namespace std ; 

int partition(vector<int>& v , int low , int hi)
{
    int pvtnum = v[hi] ; 
    int count = 0 ; 

    for(int i = low ; i < hi ; i++)
    {
        if(v[i]<=pvtnum) count++ ; 
    }
    swap(v[count+low] , v[hi]) ; 
    int pivot = count+low ; 

    int i = low , j = hi ; 
    while(i<pivot && j > pivot)
    {
        if(v[i]<=v[pivot]) i++ ; 
        else if(v[j]>v[pivot]) j-- ; 
        else
        {
            swap(v[i],v[j]) ; i++ ; j-- ; 
        }
    }
    return pivot ; 
}
int main()
{
    vector<int> v = {5,1,8,2} ; 

    int ans = partition(v,0,v.size()-1); 
    cout << ans << endl ; 

    for(int ele : v) cout << ele << " " ; 

    return 0 ; 
}