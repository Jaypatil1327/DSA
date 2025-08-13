#include<iostream> 
#include<vector>

using namespace std ; 

int searchInsert(vector<int>& nums, int target) {
        
        for(int i = 0 ; i<=nums.size()-1 ; i++)
        {
            if(nums[i]==target)
            {
                return i ; 
            }
            else if(nums[i]<target && nums[i+1]>target)
            {
                return i+1 ; 
            }
            continue ; 

        }
        int n = nums.size();
        return n ;
     
}

int main()
{
    vector<int> v ; 

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    
    int target = 7; 

    cout << searchInsert(v,target);
}