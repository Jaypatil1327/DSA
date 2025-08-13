#include<iostream>
using namespace std  ; 

int main(){
    // char ch  ; 
//     int x ; 
//     cout << "Enter alphbet to check :" << endl ; 
//     cin >> ch ; 
    
//     x = (int)ch ; 
// // a to z ----> 97 to 122
// // A to Z ----> 65 to 90 
//     if(x >= 97 && x < 123){
//         cout << "Given char is alphabet" ; 
//     }
//     if(x > 64 && x < 91){
//         cout << "Given char is in capital " << ch ; 
//     }
//     else {
//     cout << "Its not alphabet " ;
//     } 


// step 1 A = 65 Z = 90
//        a = 97 z = 122 

    char ch ; 
    cout << "Enter char to check \n" ; 
    cin >> ch ; 

    if(((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97  &&  (int)ch <= 122)){
        cout << "its alphabet \n" ; 
    }
    else 
    cout << "its not " ; 
}