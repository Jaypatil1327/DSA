#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter size of array : " ; 
    cin >> n ; 
    int arr[n] ; 

    for(int i = 0 ; i<= n-1 ; i++)
    {
        cin >> arr[i] ; 
    }

    int smax , max ; 
    max = INT_MIN ;
    smax = INT_MIN ; 

    for(int i = 0 ; i<= n-1 ; i++)
    {
        if(max < arr[i])
        {
            smax = max ; 
            max = arr[i] ; 
        }
        else if (smax < arr[i] && max != arr[i]){
            smax = arr[i] ; 
        }
    }

    if(smax==INT_MIN) cout << "not exists " ; 
    else cout << smax ; 
}