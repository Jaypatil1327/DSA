// it is solved using the prime flag solution ; 
#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    bool flag = true ; // assuming that its already prime 
    cout << "Enter the number \n" ; 
    cin >> n ;

    for(int i = 2 ; i <= n-1 ; i++){

        if(n%i==0){  // are the factor of n ; 
            flag = false ; 
            break ; 
        }
    }
// there is a case it will give a 1 prime ; 
    if(n==1){
        cout << "1 is neither prime nor composite " ; 
    }
    else if(flag == 1){
        cout << n << " is a prime nmuber " ; 
    }
    else 
    cout << n << " its a composite number " ; 

    return 0 ; 
}