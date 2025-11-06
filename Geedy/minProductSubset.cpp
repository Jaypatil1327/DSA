#include <bits/stdc++.h>
using namespace std;

int MinProductSub(vector<int> v) {
    int cn = 0 , cp = 0 , cz = 0 ; 
    int pos = 1 ; 
    int neg = 1; 
    int largestNeg = INT_MIN ; 

    for(int i = 0 ; i < v.size() ; i++) {
        if(v[i] == 0) cz++ ;
        else if(v[i] > 0) {
            cp++ ;
            pos *= v[i] ; 
        }
        else {
            cn++  ;  
            largestNeg = max(largestNeg , v[i]) ; 
            neg *= v[i] ; 
        }
    }
    cout << neg << " " << pos << " " << cn << " " << cz << " " << cp ; 
    if(cn == 0) {
        if(cz == 0) {
            auto it = min_element(v.begin() , v.end()) ; 
            return *it ; 
        } else {
            return 0 ; 
        } 
    } else {
        if(cn % 2 == 0) {
            return (neg / largestNeg) * pos ; 
        } else {
            return neg * pos ; 
        }
    }
}
int main() {
    vector<int> v = {-4 , -3 , -2 , -1 , 0 , 1 ,2 ,3 ,4} ; 
    cout << MinProductSub(v) ; 
    return 0;
}