#include<iostream> 
using namespace std ; 

int main(){
    int n ; 
    cout << "Start : " << endl ; 
    cin >> n ; 

    if(n <= 100){

    if(n>=91){
        cout << "excellent\n"; 
    }
    else if(n > 80){
        cout << "very good \n" ; 
    }
    else if( n > 70){
        cout << "good\n" ; 
    }
    else if(n >60){
        cout << "can do better\n" ; 
    }
    else if(n>50){
        cout << "average\n" ; 
    }
    else if(n>40){
        cout << "below average\n" ; 
    }
    else if(n>0)
    cout << "fail\n" ;
    else
    cout << "enter valid data " ; 
    }

    else 
    cout << "enter valid data " ; 

}