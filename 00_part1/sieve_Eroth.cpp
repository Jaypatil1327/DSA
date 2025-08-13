#include<iostream> 
#include<vector>
#include<cmath>
using namespace std ; 


void sievealgo(vector<bool>& sieve) { 
    sieve[0]  = 0 ; 
    sieve[1]  = 0 ; 

    for(int i = 2 ; i <= sqrt(sieve.size()) ; i++) { 
        for(int j = i*2 ; j < sieve.size() ; j+=i) {
            sieve[j] = 0 ; 
        }
    }
}

int main() { 
    int n ; 
    cin >> n ; 

    vector<bool> sieve(n+1 , 1 ) ; 
    sievealgo(sieve) ; 

    long count = 0 ; 
    for(int i = 2 ; i < sieve.size() ; i++) 
        if(sieve[i] == 1 ) 
        count++ ;
    
    cout << count ;  
}