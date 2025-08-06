#include<iostream>
#include<vector> 

using namespace std ; 

int search(vector<int>& v, int target) {

    // for one size array  
    if(v.size()==1)
    {
        if(target==v[0]) return 0 ;
        else return -1 ; 
    }

    // finding pivot idx 

    int low = 0 ; 
    int hi = v.size()-1 ; 

    int pivot = -1 ; 

    while(low<=hi)
    {
        int mid = low+(hi-low)/2 ; 
        if(mid==v.size()-1)
        {
            break ;  
        }
        if(v[mid]>v[mid+1] && v[mid]>v[v.size()-1])
        {
            pivot = mid+1 ; 
            break;
        }
        else if(v[mid]<v[mid+1] && v[mid]<v[v.size()-1])
        {
            hi = mid-1 ; 
        }
        else low = mid+1 ; 
    }
// for already sorted array ;
    if(pivot == -1)
    {
        low = 0 ; 
        hi = v.size()-1 ; 

        while(low<=hi)
        {
            int mid = low+(hi-low)/2 ; 

            if(v[mid]==target) return mid ; 
            else if(v[mid]<target) low = mid+1 ; 
            else hi = mid-1 ;  
        }
        return -1 ; 
    }

    if(target>=v[0] && target<=v[pivot-1])
    {
        low = 0 ; 
        hi = pivot-1 ; 

        while(low<=hi)
        {
            int mid = low + (hi - low)/2 ; 

            if(target==v[mid]) return mid ; 
            else if(target>v[mid]) low = mid+1 ;
            else hi = mid-1 ;  
        }
        return -1 ; 
    }
    else 
    {
        low = pivot ; 
        hi = v.size()-1 ; 

        while(low<=hi)
        {
            int mid = (low+hi)/2 ; 

            if(target==v[mid]) return mid ; 
            else if(target>v[mid]) low = mid+1 ;
            else hi = mid-1 ;  
        }
        return -1 ; 
    }
}

int main()
{
    vector<int> v = {1,3} ; 
    int target = 0;

    int ans = search(v,target); 
    cout << ans ; 
}