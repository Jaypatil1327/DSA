#include<iostream>
#include<stack>
using namespace std ;

int main(){
    int arr[]= {100 , 80 , 60 ,70,60 ,75,80} ; 
    int size = sizeof(arr)/sizeof(arr[0]) ; 

    stack<int> s ; 
    s.push(0) ;


    int ans[size] ;
    ans[0] = -1 ;
    
    for(int i = 1 ; i < size ; i++) {
        while(!s.empty() && arr[s.top()] <= arr[i]){
            s.pop() ; 
        }
        if(s.empty()) ans[i] = 1 ; 
        else ans[i] = s.top() ; 

        s.push(i) ; 
    }

    for(int i = 0 ; i < size ; i++){
        ans[i] = i-ans[i]  ; 
    }
    
    for(int i:ans){
        cout << i << " " ; 
    }
    
}