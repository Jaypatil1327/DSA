#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> b;

    float result = 1;

    // if (b == 0)
    //     cout << "Result: 1" << endl;
    // else if (b > 0) {
    //     for (int i = 1; i <= b; i++) {
    //         result *= a;
    //     }
    //     cout << "Result: " << result << endl;
    // } else { // b < 0
    //     for (int i = 1; i <= -b; i++) {
    //         result *= a;
    //     }
    //     cout << "Result: " << 1.0 / result << endl;
    // }

    bool flag = true ; // flag is always true untill its not negative ; 
    if(b<0){ 
        b = -b ; 
        flag = false ;
        }
    
    for(int i = 1 ; i <=b ; i++){
        result*=a ;
    }

    if(a==0 && b==0){
        cout << "not defined \n" ; 
    }
    else if(flag == false ){ // for neg expo we should divide it by 1/n
        cout << 1.0/result ;
    }
    else 
    cout << result ; 
    
    return 0;
}
