#include<iostream>
using namespace std ; 

int main(){
    int a = 1 ; 
    int b = 1 ; 
    int sum = 0 ; 
    int n ; 
    cout << "enter " ; 
    cin >> n ; 
// for 1 loop will not work ; 
// run the loop only upto n-1 bcz ;

// fibo(n) = fibo(n-1) + fibo(n-2)

    for(int i = 1 ; i <= n-2 ; i++){

        sum = a + b ;
        a = b ; 
        b = sum ; 
    }

    cout << b ; 
}