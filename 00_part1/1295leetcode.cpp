#include<iostream>
#include<climits> // only of char and int
#include<float.h>// floats 
using namespace std ; 

int main()
{

    int arr[5] = {555,901,482,1771 , 12};
   
    int even = 0 ; // to check number
    for(int i = 0 ; i<= 4 ; i++)
    {   
        int count = 0 ; // to check digit 

        while(arr[i] != 0 )
        {   
            count++ ; // 1 2 3 
            arr[i]/=10 ; 
        }

        if(count%2==0) even++ ;
    }

    cout << even ; 
 
}