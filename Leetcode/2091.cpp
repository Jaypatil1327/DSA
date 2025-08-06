#include<iostream>
#include<vector>
using namespace std ; 

int main(){
        vector<int> nums = {2,10,7,5,4,1,8,6} ; 

        if(nums.size() == 1) return 1 ; 
        int minIdx = 0 ; 
        int maxIdx = 0 ;
        int mx = nums[0] ;  
        int mn = nums[0] ;  

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > mx){
                mx = nums[i] ; 
                maxIdx = i ; 
            }
            if(nums[i] < mn){
                mn = nums[i] ; 
                minIdx = i ; 
            }
        }

        cout << maxIdx << " " << minIdx ; 
}