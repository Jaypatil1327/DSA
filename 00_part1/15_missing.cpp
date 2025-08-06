#include<iostream>
using namespace std;
int main()
{
    int nums[10] = {9,6,4,2,3,5,7,0,1}; 
        int temp = 0 ; 

        for(int i = 0 ; i<=9; i++)
        {
            if(nums[i]==temp) temp++ ; 
        }
        cout << temp ;  
    
return 0;
}