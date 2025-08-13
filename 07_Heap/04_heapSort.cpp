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

    int arr[] = {10 , 1 ,2 ,20 , 5 , 8} ; 

    for(int i = 0 ; i < 6 ; i++){
        pq.push(arr[i]) ; 
    }

    int i = 0 ; 
    
    while(pq.size() > 0){
        arr[i++] = pq.top() ; 
        pq.pop() ; 
    }

    for(int i = 0 ; i < 6 ; i++){
        cout << arr[i] << " " ; 
    }
    

}