#include<iostream>
#include<vector>

using namespace std ;

class player
{
    public: 
    string name ; 
    int age ; 
    int temp ;  
};

int main()
{
    player Jay ; 

    Jay.name = "jayesh" ; 
    Jay.age = 19 ; 
    Jay.temp = 1327 ; 

    cout << Jay.name << " " ; 
    cout << Jay.age  << " "; 
    cout << Jay.temp  ; 
}