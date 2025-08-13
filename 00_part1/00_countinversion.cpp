#include<iostream>
#include<vector>
using namespace std;
int count = 0 ; 
void mergeArray( vector<int>& v ,  vector<int>& v2  , vector<int>& ans)
{
    int i = 0 ; int j = 0 ; int k = 0 ; 

    while( i < v.size() ||  j < v2.size())
    {   
        if(i == v.size() || j == v2.size())
        {
            if(j  < v2.size())
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

int inversion(vector<int> v , vector<int> v1)
{
    int i = 0 , j = 0 , c = 0 ; 
    while(i < v.size() && j < v1.size())
    {
        if(v[i] > v1[j])
        {
            c += (v.size()-i) ;
            j++ ;  
        }
        else i++ ; 
    }
    return c ; 
} 
void mergesort(vector<int> &v)
{
// divde     
    int n = v.size() , n1 = n/2 , n2 = n-n1 ; 
    if(n==1) return ; 

    vector<int> a(n1) , b(n2) ; 
// copy pasting 
    for(int i = 0 ; i<n1 ; i++)
    {
        a[i] = v[i] ;
    }
    for(int i = 0 ; i<n2 ; i++)
    {
        b[i] = v[i+n1] ;
    }
// magic of recursion 
    mergesort(a) ; 
    mergesort(b) ; 

    count += inversion(a,b); // counting the inversions 

// mergeing the sorted array 
    mergeArray(a,b,v) ;
    a.clear() ; 
    b.clear() ;  
}

int main()
{
    vector<int> v  = {6,5,4,3,2,1} ;
    mergesort(v) ; 
    cout << count ;  

// brute force solution :::::
    // int count = 0  ; 

        // for(int i = 0 ; i < v.size()-1 ; i++)
        // {
        //     for(int j = i+1 ; j < v.size() ; j++)
        //     {
        //         if(v[i]>v[j]) count++ ; 
        //     }
        // }
        // cout << count ; 

 return 0;
}