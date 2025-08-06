#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;


class Solution {
public:

    int sumofstr(string s){
        int sum = 0 ; 
        for(int i = 0 ; i < s.length() ; i++){
            sum+=(s[i] - '0') ; 
        }
        return sum ; 
    }

    void check(vector<string>& str , int i1 , int i2) {
        int s1 = sumofstr(str[i1]) ; 
        int s2 = sumofstr(str[i2]) ; 

        if(s1 == s2 && str[i1].length() < str[i2].length()){
            swap(str[i1] , str[i2]) ; 
        }
    }

    vector<string> largestNumber(vector<int>& nums) {
        vector<string> temp ; 
        
        // to convert to all arr ele to string 
        for(int i : nums) {
            temp.push_back(to_string(i)) ; 
        }

         sort(temp.begin() , temp.end()) ; 

        for(int i = 1 ; i < temp.size() ; i++){
            if(temp[i][0] == temp[i-1][0]){
                check(temp , i-1 , i) ; 
            }
        }

        reverse(temp.begin() , temp.end()) ; 

        return temp ; 
    }
};

int main(){
    vector<int> nums = {2, 10} ; 

    Solution s ; 
    vector<string> str = s.largestNumber(nums) ;  

    for(string ele : str) cout << ele << " " ; 
    
}