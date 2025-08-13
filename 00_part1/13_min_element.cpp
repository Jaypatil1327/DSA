#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5] = {12 , 432 ,34 ,53 ,54} ; 

    int min = INT_MAX ; 
    for(int i=0 ; i<=4 ; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i] ; 
        }
    }
    cout << min ; 
 return 0;
}