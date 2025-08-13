#include<iostream>
#include<stack>
using namespace std ;

int main(){
    int arr[6] = {3,4,2,5,1,6} ; 
    int size = sizeof(arr)/sizeof(arr[0]) ; 

    stack<int> s ; 
    int ans[size] ;

    s.push(arr[size-1]) ; 

    ans[size-1] = -1 ; 
    
    for(int i = size-2 ; i>=0 ; i--){
        while(s.size() != 0 && s.top() < arr[i]){
            s.pop() ; 
        }

        if(s.empty()) ans[i] = -1 ; 
        else {
            ans[i] = s.top() ; 
        }
        s.push(arr[i]) ; 
    }

    for(int i:ans){
        cout << i << " " ; 
    }
    
}