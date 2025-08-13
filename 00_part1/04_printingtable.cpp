#include<iostream>
using namespace std ;

int main(){
    int n , x ; 
    //int z  = 1; 
    cout << "Enter the nums Print from n to x_times \n" ; 
    cin >> n >> x ; 

    for(int i = n , z = 1 ; i <= n*x ; i+=n){

        cout << n << " x " << z << " = " << i << endl  ; 
        z++ ;

        // this loop is running n*x times from n and its adding value in itself  
    }
}

    // int n ; 
    // int x ; 

    // cout << "Enter the print table : " ; 
    // cin >> n ;
    // cout << "Enter the number to print upto:" ; 
    // cin >> x ;  

    // for(int i = 1  ; i <= x ; i++){
    //     cout << n*i << endl ; 
    // }


