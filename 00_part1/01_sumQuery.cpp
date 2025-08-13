#include<iostream>
#include<vector> 

using namespace std ; 

int main()
{   
    vector<int> arr = {1,4,5,3,2,7,6}  ; 

    for(int i = 1 ; i <= arr.size()-1 ; i++)
    {
        arr[i] = arr[i-1]+arr[i] ;  // prefix sum 
    }
    int a , b ; 
    cout << "Enter to calculate the sum from : " ; 
    cin >> a >> b ; 

    cout << arr[b-1]-arr[a-1] ; 

}