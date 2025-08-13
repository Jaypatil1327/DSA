#include<iostream>
using namespace std;

void display(int a[],int size) // pass by reference 
{
    for(int i=0 ; i<=size -1 ; i++)
    {
        cout << a[i] << " " ; 
    }
    cout << endl ; 

}

void upadate(int b[] , int  size ) // we can upadate the array and modify it 
{   
    char ch ; 
    cout << "Do you want to upadate the array \n" ; 
    cout << "Press y/n :" ; 
    cin >> ch ; 

    if(ch==(int)121)
    {
        for(int i=0 ; i<=size-1 ; i++)
        {
            cin >> b[i] ; 
        }
    } 
    else cout << "EXIT" ;  
    
}

int main()
{
    int arr[] = {2,4,8,10,12,20};
    int size = sizeof(arr)/sizeof(arr[0]) ;
    display(arr , size);
    upadate(arr,size) ; 
    display(arr,size) ; 
}