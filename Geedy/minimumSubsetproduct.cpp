#include<iostream>
#include<climits>

using namespace std ; 

int main(){
    int arr[] = {-2 , -2 , -4 ,-1 , 0}  ;
    int size = sizeof(arr) / (sizeof(arr[0])) ; 

    int cnz = 0; 
    int cnn = 0;  
    int larn = INT_MIN ;
    int larp = INT_MAX ; 
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == 0){
            cnz++ ;    
        }
        else if(arr[i] > 0){
            larp = min(larp , arr[i]) ; 
        }
        else {
            cnn++ ; 
            larn = max(larn , arr[i]) ; 
        }
    }

    if(cnn == 0 and cnz == 0) cout << larp ; 
    else if(cnn == 0 and cnz != 0) cout << 0 ; 
    else {
        bool flag = cnn % 2 == 0 ? true : false ; 
        int ans = 1 ; 
         for(int i = 0 ; i < size ; i++){
            if(arr[i] == larn){
                larn = INT_MAX ; 
                continue; 
            }
            else {
                if(arr[i] == 0) continue; 
                ans *= arr[i] ; 
            }
        }
        cout << ans ; 
    }
    return 0 ; 
}