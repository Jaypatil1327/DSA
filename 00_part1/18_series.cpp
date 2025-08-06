// 1-2+3-4+5-6+7-8+9-10

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    int sum = 0  ; 
    cout << "Enter :" ;
    cin >> n ; 

//METHOD  1 :

    // for(int i = 1 ; i <= n ; i++){
    //     if(i%2==0){
    //         sum-=i ; 
    //     }
    //     else 
    //     sum+=i ;  
    // } 

//METHOD 2 :

//for even numbers :
//take them into pair like \
// (1-2)+(3-4)+(5-6)+(7-8)
// they will be in -(n)/2 format 

    if(n%2==0) sum = -(n/2) ; 

//for Odd numbers :
//take them into pair like \
// (1-2)+(3-4)+(5-6)+7
// they will be in -(n)/2 + 7 format 

    else 
    sum = -(n/2)+n ; 



    cout << sum ; 
}