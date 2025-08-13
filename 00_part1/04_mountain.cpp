#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v = {1,2,3,2} ;

    // for(int i = 1 ; i < v.size()-1 ; i++)
    // {
    //     if(v[i]>v[i-1] && v[i]>v[i+1])
    //     {
    //         cout << v[i] ; 
    //         break; 
    //     }
    // }

    int low = 1 ; 
    int hi = v.size()-2 ; 

    while(low<=hi)
    {   
        int mid = low+(hi-low)/2 ; 

        if(v[mid]>v[mid-1] && v[mid]>v[mid+1])
        {
            cout << v[mid] ; 
            break; 
        } 
        else if(v[mid] > v[mid-1]) low = mid+1 ; 
        else hi = mid-1 ;
    }

 return 0;
}