#include<iostream>
#include<cmath>
using namespace std  ; 

int main(){
    int n ; 
    cout << "Enter the number : " ; 
    cin >> n ; 
// 1 2 4 8 16 ............. n :
    int a = 1 ; 

    for(int i = 1 ; i <= n ; i++){

        cout << a << " " << i << endl  ; 
// 2x2=4 4x4=8 8x8=16...................n ;
        a = a * 2  ; 
    }
    
}