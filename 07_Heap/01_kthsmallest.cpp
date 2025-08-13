#include<iostream>
#include<queue> 

using namespace std ;

int main(){
    int arr[6] = {1,5,32,74,73 , 5654} ; 
    int n = sizeof(arr) / sizeof(arr[0]) ;
     
    int k = 2 ; 

    priority_queue<int> pq ; 

    for(int i = 0 ; i < n ; i++){
        pq.push(arr[i]) ; 
        if(pq.size() > k) pq.pop(); 
    }
    cout << pq.top() ; 
}