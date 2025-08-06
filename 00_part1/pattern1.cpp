#include<iostream>
using namespace std ; 

// pattern 5 is important ???????

void pattern1(int n ){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << "*" ; 
        }
        cout << endl ; 
    }
}

void pattern2(int n ){
    int start ; 
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0 ) start = 1 ; 
        else start = 0 ; 
        for(int j = 1 ; j <= n ; j++){
            cout << start ; 
            start = 1 - start ; 
        }
        cout << endl ; 
    }
}

void pattern3(int n ){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << "*" ; 
        }
        cout << endl ; 
    }
}

void pattern4(int n ){
    int start ; 
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0 ) start = 1 ; 
        else start = 0 ; 
        for(int j = 1 ; j <= i ; j++){
            cout << start ; 
            start = 1 - start ; 
        }
        cout << endl ; 
    }
}

void pattern5(int n ){
 
    for(int i = 1 ; i <= n  ; i++){

        for(int j = 1 ; j < i  ; j--){
            cout << "*" ; 
        }
        cout << endl ;
    }
}

void pattern6(int n){
    //space
    for (int i = 1; i <= n; i++) {

        for (int j = n; j > i ; j--) {
            cout << " ";
        }
     
         //star 
        for(int j = 1 ; j <= 2*i-1  ; j++){
            cout << "*" ; 
        }
        cout << endl ; 
    }
}

void pattern7(int n ){
    for(int i = 1 ; i <= n ; i++){

        for(int j = 1 ; j < i ; j++){
            cout << " " ; 
        }
        for(int j = 1 ; j <= 2*n-(2*i-1) ; j++){
            cout << "*"  ; 
        }
        cout << endl ; 
        
    }
}

void pattern8(int n ){
    int star  ; 
    for(int i = 1 ; i <= 2*n-1 ; i++){
     star = i  ; 
        if(i > n ) star = 2*n-i ; 

         for(int j = 1 ; j <= star ; j++ ){
            cout << "x" ; 
         }
        cout << endl ; 
    }
}
int main(){
    int x  ;
    int n ; 
    cout << "num times of case " ; 
    cin >> x ; 

    for(int i = 1 ; i <= x ; i++ ){
        cout << "----"; 
        cin >> n  ; 
     /* pattern1(n);
        pattern2(n); 
        pattern3(n);
        pattern4(n);
        pattern5(n); 
        pattern6(n); 
        pattern7(n);
        pattern8(n);*/
        pattern6(n);
    }
    return 0 ; 
}