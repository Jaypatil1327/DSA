#include<iostream>
#include<unordered_map> 

using namespace std ;

int main(){
    unordered_map<string , int> mp ; 

    // method 1 : using Pair Class 

    // for(int i = 0 ; i < 4 ; i++){
    //     pair<string , int > p1 ; 
    //     cin >> p1.first ; 
    //     cin >> p1.second ; 

    //     mp.insert(p1) ; 
    // }

    // for(pair<string , int> i : mp){
    //     cout << i.first << " " ; 
    // }


    // Method 2 : using idx 

    mp["rohan"] = 12 ; 
    mp["jay"] = 132 ; 
    mp["nitin"] = 13 ; 

    for(auto key : mp){
        cout << key.first; 
    }
}