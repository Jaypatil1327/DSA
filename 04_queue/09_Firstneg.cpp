#include<iostream>
#include<queue>

using namespace std ; 

int main() {

    int arr[] = {0,-1,-2,-5,6,4,7,-8} ; 
    int size = sizeof(arr) / sizeof(arr[0]) ; 

    queue<int> q ; 

    for(int i = 0 ; i < size ; i++) {
        if(arr[i] < 0) q.push(i) ; 
    }
 
    int k = 3 ; 

    int ans[size-k+1] ; 

        for (int i = 0; i <= size - k; i++) {
            // Pop elements out of range
            while (!q.empty() && q.front() < i) q.pop();

            // Check if the queue has an element in the current window
            if (q.empty() || q.front() >= i + k) ans[i] = 0 ;
            else ans[i] = arr[q.front()];
            
        }

    for(int i : ans) cout << i << " " ; 
}