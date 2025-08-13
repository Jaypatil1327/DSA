#include<iostream>
#include<climits>
#include<algorithm>

using namespace std; 

void Maxinarray1(int arr[] , int idx , int last , int max ) 
{   
    if(idx == last)
    {
        cout << max ; 
        return ; 
    }
    if(max<arr[idx]){
        max = arr[idx] ; 
    }
    Maxinarray1(arr , idx+1 , last , max ) ;
}

int Maxinarray2(int arr[] , int idx , int last ) 
{   if(idx == last) return INT_MIN ;
    return max(arr[idx] , Maxinarray2(arr , idx+1 , last)) ; 
}

int main()
{
    int arr[] = {1,2,10,4,500,6} ; 
    cout << Maxinarray2(arr , 0 , 6 ) ;

}