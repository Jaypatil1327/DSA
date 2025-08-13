#include<iostream>
#include<stack>
using namespace std ;

int main(){
    int arr[]= {3,1,2,5,4,6,2,3} ; 
    int size = sizeof(arr)/sizeof(arr[0]) ; 

    stack<int> s ; 
    s.push(arr[0]) ;


    int ans[size] ;
    ans[0] = -1 ; 

    for(int i = 1 ; i < size ; i++){
        while(!s.empty() && s.top() < arr[i]){
            s.pop() ; 
        }
        if(s.empty()) ans[i] = -1 ; 
        else ans[i] = s.top() ; 

        s.push(arr[i]) ; 
    }
    for(int i:ans){
        cout << i << " " ; 
    }
    
}