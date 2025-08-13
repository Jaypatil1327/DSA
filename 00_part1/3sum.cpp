#include<iostream>
#include<vector> 
using namespace std ; 

int main()
{
    vector<int> arr ; 
    int n ;
    cout << "Enter the size of vec " ; cin >> n ; 
    cout << "Enter values :" ; 
    for(int i = 0 ; i<= n-1 ; i++)
    {
        int x ; 
        cin >> x ; 
        arr.push_back(x) ; 
    }
    
    vector<vector<int>> ans; 
    // int n = ans[0].size() ; 
    int target ; 
    cout << "Enter the target:" ; 
    cin >> target ; 

    for(int i = 0 ; i<=arr.size()-1 ; i++)
    {
        for(int j = i+1 ; j<=arr.size()-1 ; j++)
        {
            for(int k = j+1 ; k<=arr.size()-1 ; k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    cout << i << " " << j << " " << k  << endl ;  
                } 
            }
        }
    }

}