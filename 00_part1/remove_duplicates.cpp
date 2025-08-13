#include<iostream>
#include<vector>

using namespace std ; 

void removeDuplicates(vector<int>& v) {

       int low = 0 ;
       int mid = 1 ; 
       int hi = v.size()-1 ; 

       while(mid<=hi)
        {
            if(v[low]==v[mid] && mid-low==1)
            {
                mid+=2 ; 
                low+=2 ; 

            }
            if(v[low]==v[mid])
            {
                int temp = v[mid]; 
                v[mid]=v[hi];
                v[hi]=temp ; 
                mid++ ; 
                low+=2;
                hi--;
                continue;
            }
            if(v[low]<v[mid])
            {
                mid++ ; 
            }

            else if(v[low]>v[hi] )
            {
                int temp = v[hi] ; 
                v[hi]=v[low] ; 
                v[low]=temp ; 
                hi-- ;  
            }
        
        }
    }


int main()
{
    vector<int> v ; 
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);

    removeDuplicates(v);
    for(int i = 0 ; i<= v.size()-1 ; i++)
    {
        cout << v[i] << " " ; 
    }
}