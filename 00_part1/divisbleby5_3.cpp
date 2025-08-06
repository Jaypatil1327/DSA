 #include<iostream> 
 using namespace std ; 
 
//Take the number which is divisble by 5 and 3
//  int main(){
//     int x  ; 
//     cout << "enter the num to check " << endl ; 
//     cin >> x ; 

//     if(x % 5== 0 && x %  3 == 0){
//         cout << "Its divisible " ; 
//     }
//     else 
//     cout << "Not divisble " << endl ; 
    
//  }

//Take the number which is divisble by 5 or 3 : 
 int main(){
    int x  ; 
    cout << "enter the num to check " << endl ; 
    cin >> x ; 

    if(x % 5== 0 || x %  3 == 0){
        cout << "Its divisible 5 or 3" ; 
    }
    else 
    cout << "Not divisble 5 or 3 " << endl ; 
    
 }