#include<bits/stdc++.h>
using namespace std ; 

int main() {
    int num ; 
    cin >> num ; 

    string result = "" ; 

    while(num > 1) {
        if(num % 2 == 1) result+='1' ; 
        else result+='0' ; 
        num/=2 ; 
    }
    reverse(result.begin() , result.end()) ; 
    cout << result << endl; 
    cout << 1 % 2 ;   
}