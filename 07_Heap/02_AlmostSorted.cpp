#include<iostream>
#include<queue>

using namespace std ; 

int main(){
    int arr[] = {6,5,3,2,8,10,9} ;

    priority_queue<int , vector<int> , greater<int>> pq ; 

    int k = 3 ;
    int j = 0 ;  

    for(int i = 0 ; i < 7 ; i++){ 
        pq.push(arr[i]) ; 

        if(pq.size() > k){
            arr[j++] = pq.top() ; 
            pq.pop() ; 
        } 
    }
    while(!pq.empty()){
        arr[j++] = pq.top() ; 
        pq.pop() ; 
    }
    for(int i : arr){
        cout << i << " " ; 
    }
}  