#include <bits/stdc++.h>
using namespace std;

bool cmp(int &a, int &b) {
    return a > b;
}

int soln(vector<int> &x, vector<int> &y) {
    sort(x.begin(), x.end(), cmp);  // horizontal cuts 
    sort(y.begin(), y.end(), cmp);  // vertical cuts 
    
    int ver = 1, hor = 1, total = 0; 
    int i = 0, j = 0; 

    while (i < x.size() && j < y.size()) {
        if (x[i] >= y[j]) {
            total += hor * x[i]; 
            ver++; 
            i++; 
        } else { 
            total += ver * y[j]; 
            hor++; 
            j++; 
        }
    }
    
    while (i < x.size()){ 
        total += hor * x[i++]; 
        ver++ ; 
    }
    while (j < y.size()) {
        total += ver * y[j++];
        hor++ ; 
    }

    return total; 
}

int main() {
    vector<int> x = {4, 1, 2, 1, 3}; 
    vector<int> y = {4, 1, 2};
    cout << soln(x, y);  
    return 0;
}