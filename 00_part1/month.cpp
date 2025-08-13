#include<iostream>
using namespace std ; 

int main(){
    cout << "Start enter \n" ; 
    int x ; 
    cin >> x ; 
for(int x = 1 ; x <= 12 ; x++){
    
    if (x<=12 && x != 2 ){
    switch((x <= 7 && x%2 != 0 ) || (x>=7 && x%2 == 0)){
        case 1 :
        cout << " Its has 31 days \n" ; 
        break ; 
    }
    switch( x==6 || x == 4 || x == 9  || x == 11){ 
        case 1 : 
        cout << " Its has 30 days in month\n" ;
        break ;  
    } 
    }  
    else if(x=2) cout << " its has 28 days \n" ; 
    else cout << " Enter valiad number \n" ; 

}
}
