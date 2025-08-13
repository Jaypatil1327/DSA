#include<iostream>
using namespace std ; 


class Heap{
    public : 
        int arr[20] ; 
        int i = 1 ; 

        void push(int val){
            arr[i] = val ; 
            int j = i ;
            while(j/2 != 0 && arr[j/2] > arr[j]){
                swap(arr[j/2] , arr[j]) ;
                j = j/2 ; 
            }
            i++ ;
        }

        int top(){
            return arr[1] ; 
        }

        int size(){
            return i-1 ; 
        }

        void pop(){
            i-- ; 
            arr[1] = arr[i] ; 

            int j = 1 ; 

            while(true){
                int l = 2*j ; 
                int r = 2*j+1 ; 

                if(l >= i) break;
                if(r >= i){
                    if(arr[j] > arr[l]){
                        swap(arr[j] , arr[l]) ; 
                        j = l ; 
                    }
                    break;
                }
                if(arr[r] > arr[l]){
                    if(arr[j] > arr[l]){
                        swap(arr[j] , arr[l]) ; 
                        j = l ; 
                    }
                    else break;
                }
                else {
                    if(arr[j] > arr[r]){
                        swap(arr[j] , arr[r]) ; 
                        j = r ; 
                    }
                    else break;
                }
            }
        }
};

int main(){
    Heap pq ; 
    pq.push(10) ; 
    pq.push(20) ; 
    pq.push(100) ; 
    pq.push(23) ; 
    pq.push(24) ; 
    pq.pop() ; 
    pq.pop() ; 
    cout << pq.top() ; 
}