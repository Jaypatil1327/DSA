#include<bits/stdc++.h>
using namespace std ; 
int main() {
    int total = 0 ; 
    int x = 1 ; 
    string str ; 
    cin >> str ; 

    for(int i = str.length()-1 ; i >= 0 ; i--) {
        if(str[i] == '1') {
            total += x ; 
        } 
        x*=2 ; 
    }
    cout << total ; 
 }