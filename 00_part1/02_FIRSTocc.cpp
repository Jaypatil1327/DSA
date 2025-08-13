#include<iostream>
#include<vector>
using namespace std ; 

int first_pt(int target , vector<int> &v)
{
    int low = 0 ; 
    int hi = v.size()-1 ; 

    while(low<=hi)
    {
        int mid = low + (hi - low) / 2 ; 

        if(v[mid]==target)
        {
            if(target==v[mid-1]) hi = mid-1 ; 
            else
            {   
               return mid ; 
            }
        }
        else if(v[mid]<target) low = mid+1 ; 
        else hi = mid-1 ;  
    } 
    return -1 ; 
}

int last_pt(int target , vector<int> &v)
{
    int low = 0 ; 
    int hi = v.size()-1 ; 

    while(low<=hi)
    {
        int mid = low + (hi - low) / 2 ; 

        if(v[mid]==target)
        {
            if(target==v[mid+1]) low = mid+1 ; 
            else
            {
                return mid ; 
            }
        }
        else if(v[mid]<target) low = mid + 1 ; 
        else hi = mid -1 ; 
    }
    return -1 ; 
}

int main()
{
    vector<int> v = {2,2} ; 
    int target ; 
    cin >> target;
    vector<int> ans ; 
    
}