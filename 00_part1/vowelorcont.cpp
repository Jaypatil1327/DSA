#include<iostream>
using namespace std; 

int main(){
    char ch ; 
    cout <<"Enter char " ; 
    cin >> ch ; 

    // if((int)ch >= 97 && (int)ch <= 122){
    //     if('a'== ch){
    //     cout << ch << " its an vowel \n" ;\
    //     }
    //     else if('e'==ch ){
    //     cout << ch << " its an vowel \n" ;
    //     }
    //     else if('i'==ch ){
    //         cout << ch << " its an vowel \n";
    //     }
    //     else if ('o' == ch){
    //         cout << ch << " its an vowel \n";
    //     }
    //     else if('u' == ch){
    //         cout << ch << " its an vowel \n" ; 
    //     }
    //     else  
    //      cout << "its constant " ;
    // }
    // else 
    // cout << "its constant " ; 

    if((ch=='a') || (ch == 'i') || (ch=='e') || (ch == 'o') || (ch=='u')){
        cout << "its an vowel " << endl ; 
    }

    else 
    cout << "its an constant " ; 
}