
#include<iostream>
#include<vector>

using namespace std ;

int paritition(vector<int> &v , int st , int ed)
{
    int pivot_num = v[(st+ed)/2] ; 
    int count = 0 ; 

    for(int i = st ; i <= ed ; i++)
    {
        if(i == (st+ed)/2) continue ; 
        else if(v[i]<=pivot_num) count++ ; 
    }
    int pivot = st + count ;
    swap(v[pivot] , v[(st+ed)/2]) ; 
    int i = st ; 
    int j = ed ; 

    while(i < pivot && j > pivot )
    {
        if(v[i]<=v[pivot]) i++ ; 
        else if (v[j] > v[pivot]) j--;
        else
        {
            swap(v[i],v[j]) ; 
            i++ ; j-- ; 
        }
    } 
    return pivot ; 
}

void qk(vector<int> &v , int st , int ed)
{
    if(st>=ed) return ; 
    int pivot = paritition(v,st,ed) ; 

    qk(v,st,pivot-1) ;
    qk(v,pivot+1 ,ed) ;  
}

int main()
{
    vector<int> v ; 
    v={2,4,5,67,8,-2,0} ; 
    qk(v,0,v.size()-1);
    for(int n : v ) cout << n << " " ; 
}