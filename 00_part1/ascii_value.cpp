#include<iostream>
using namespace std ; 

int main(){
    char ch ; 
    cout << "Enter num to convert to acsii :" ; 
    cin >> ch ;
    cout << (int)ch << endl  ;
    cout << "Index" << endl ; 

    int x = (int)ch ; 

    if(65 <= x && x < 97 ){
        cout << x-64 ;  
    }
    else cout << x-96 ; 
}