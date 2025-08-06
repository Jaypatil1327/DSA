#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {

    vector<vector<string>> tt = {
        {"a11", "b11", "c11", "a21", "b21", "c21"},
        {"d11", "e11", "f11", "d21", "e21", "f21"},
        {"a12", "b12", "c12", "a22", "b22", "c22"},
        {"d12", "e12", "f12", "d22", "e22", "f22"},
        {"a13", "b13", "c13", "a23", "b23", "c22"}
    };

    vector<vector<string>> sub =   {
        {"A11+A12+A13", "B11+B12+B13", "C11+C12+C13"},
        {"A11+A12+A13", "B11+B12+B13", "C11+C12+C13"},
        {"A11+A12+A13", "B11+B12+B13", "C11+C12+C13"},
        {"B12+B13", "C11+C12", "D11+D12", "F11+F12"}

    } ; 

    int i = 0 ;
    while(i < sub[0].size()){
        
    }
}

