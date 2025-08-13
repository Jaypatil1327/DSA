#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> nums = {-1,-1,0,0,-1,-1} ; 
        vector<int> pre(nums.size()) ; 

        pre[0] = nums[0] ; 

        for(int i = 1 ; i < pre.size() ; i++)
        {
            pre[i] = nums[i] + pre[i-1] ;
             
        }

        for(int ele : pre) cout << ele << " " ; 
        cout << endl ; 

        vector<int> suff(nums.size()) ; 

        suff[suff.size()-1] = nums[nums.size()-1] ; 

        for(int i = nums.size()-2 ; i >=0 ; i--)
        {
            suff[i] = suff[i+1] + nums[i] ;
            if(suff[i]==pre[i]) cout << i ;
            cout << endl ; 
        }
        for(int ele : suff)cout << ele << " " ; 
        cout << endl ;


 return 0;
}