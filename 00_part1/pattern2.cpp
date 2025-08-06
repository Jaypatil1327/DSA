#include<iostream>
using namespace std ; 
/*
*
**
***
****
*****
****
***
**
*
*/
void pattern1(int n ){
    for(int i = 1 ; i <= 2*n-1 ; i++){
        int star = i ; 
        if(i > n )  star = 2*n-i ; 

        for(int j = 1 ; j <= star ; j++){
            cout << "*" ; 
        }
        cout << endl ; 
    }

}

/*
0
10
010
1010
01010
*/
void pattern2(int n ) {
    int start = 1 ; 
    for(int i = 1 ; i < n ; i++){
        if(i % 2 == 0) start = 1 ; 
        else start = 0 ; 

        for(int j = 1 ; j <= i ; j++){
            cout << start ; 
            start = 1 - start ; 
        }
        cout << endl ; 
    }
}

void pattern3(int n ){
    int space = 2*(n-1) ;  

    for(int i = 1 ; i <= n ; i++ ){
        for(int j = 1 ; j <= i ; j++){
            cout << j  ; 
        }
        for(int j = 1 ; j <= space ; j++){
            cout << " " ; 
        }

        for(int j = i ; j >= 1 ; j--){
            cout << j  ; 
        }

        cout << endl ; 
        space-=2 ;
    }
}

void pattern4(int n ){
    int num = 1 ; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << num << "  "; 
            num++ ; 
        }
        cout << endl ;
    }
}
void pattern5(int n ){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'A' ; ch <= 'A'+i  ; ch++){
            cout << ch << " "; 
            
        }
        cout << endl ;
    }
}
void pattern6(int n ){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'A' ; ch <= 'A'+(n-i-1) ; ch++){
            cout << ch << " "; 
            
        }
        cout << endl ;
    }
}



int main(){
    int x ; 
    cout << "enter times to perform the loop " <<  endl ; 
    cin >> x ; 
    cout << endl ; 
    pattern7(x) ; 
    return 0  ; 

}