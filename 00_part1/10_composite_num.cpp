#include<iostream>
using namespace std ; 

int main(){
    int n , count ; 
    cout << "enter the number\n" ; 
    cin >> n ; 

    for(int i = 2 ; i <= n ; i++){
        if(n%i==0){
            cout << n << " is a composite number" << endl ; 
            break;
        }
    }
}
