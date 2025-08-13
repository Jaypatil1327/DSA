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

    int target ; cout << "Enter the target " ; cin >> target ; 

    int i = 0 ; 
    int j = arr.size()-1 ; 

    while(i<=j)
    {
        if(arr[i]+arr[j]==target) //if equal print it 
        {
            cout << "[ " << i << " , " << j << " ]" ; 
            i++ ; j-- ; 
            cout << endl ; 
        }
        else if(arr[i]+arr[j]>target) j-- ; // if greater than a+b then j--
        else i++ ; // else i++ 
    }
}