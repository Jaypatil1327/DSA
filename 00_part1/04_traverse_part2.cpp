#include<iostream>
#include<climits>

using namespace std ; 

void maximum(int arr[] , int cur_idx , int last_idx ) 
{   
    if(cur_idx == last_idx) return ; 
    cout << arr[cur_idx] << " " ; 
    maximum(arr , cur_idx+1 , last_idx) ; 
    //0->6 
    //1 ->6
    //2-> 6 
    //3-> 6 
    //4-> 6 
    //5-> 6 
    //6-> 6 
}

int main()
{
    int arr[] = {1,2,3,4,5,6} ; 
    maximum(arr , 0 , 6) ; 
}