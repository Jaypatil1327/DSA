#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(vector<double> &v) {
        if(v.size() == 1) {
            // concept of epsilon :)
            if(abs(v[0]-24) <= 0.01) return true ; 
            else return false ; 
        }

        for(int i = 0 ; i < v.size() ; i++) {
            for(int j = 0 ; j < v.size() ; j++) {
                if(i == j) continue ; 
                else {
                    vector<double> operation(6) ; 
                    operation[0] = v[i] + v[j] ;
                    operation[1] = v[i] * v[j] ; 
                    operation[2] = v[i] - v[j] ; 
                    operation[3] = v[j] - v[i] ;
                    double x , y ; 

                    if(v[i] == 0 or v[j] == 0) {
                        x = y = 0 ; 
                    }  else {
                        x = v[i]/v[j] ; 
                        y = v[j]/v[i] ;
                    }

                    operation[4] = x;  
                    operation[5] = y ; 

                    vector<double> temp ; 
                    for(int k = 0 ; k < v.size() ; k++) {
                        if(k == i or k == j) continue ; 
                        else temp.push_back(v[k]) ; 
                    } 

                    for(int a = 0 ; a < 6 ; a++) {
                        temp.push_back(operation[a]) ; 
                        if(solve(temp)) return true ; 
                        temp.pop_back() ;  
                    }
                }
            }
        }
        return false ; 
    }
    bool judgePoint24(vector<int>& cards) {
        vector<double> cd ; 
        for(auto el : cards) cd.push_back(el) ; 
        return solve(cd) ; 
    }
};


int main() {

}