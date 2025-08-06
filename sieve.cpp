#include<iostream>
#include<math.h>
#include<vector>
using namespace std ; 

vector<bool> sieve ; 

void Algo() {
    sieve[0] = sieve[1] = true ; 
    for(int i = 2 ; i < sqrt(sieve.size()-1) ; i++) {
        if(sieve[i] == false) {
            for(int j = i*2 ; j < sieve.size() ; j+=i) {
                sieve[j] = true ; 
            }
        }
    }
}
int main() {
    int n ; 
    cin >> n ; 

    sieve.resize(n+1) ; 

    Algo() ;

    for(int i = 2 ; i < n+1 ; i++) {
        if(sieve[i] == false) 
            cout << i << " " ; 
    }
}
