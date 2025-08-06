#include<iostream>
#include<vector> 

using namespace std ;

class player {
    private : 
        int age ; 
        int score ; 
        bool alive  ; 
        int health ; 
    public : 
        // for this we can use this operator or :: scope resolution operator 
        void setAge(int age) {
            this->age = age ;  
        }
        void setScore(int score) {
            this->score = score ; 
        }
        void setAlive(bool alive) {
            this-> alive = alive; 
        }
        void setHealth(int health) {
            this->health = health ; 
        }
        int getage(){ return age ; } ; 
        int getscore(){ return score ;} ; 
        int gethealth(){ return health ; } ; 
        bool isalive(){ return alive ; } ;     
} ;

player getmaxScore(player x , player y) {

    if(x.getscore() > y.getscore()) return x ; 
    else return y ; 
}

int main() {

 //They are Dynamically typed classes 

    player Jay ; 
    player Rohan ; 

    Rohan.setScore(15) ; 
    Rohan.setAlive(false) ; 
    Rohan.setAge(12) ; 
    Rohan.setHealth(99) ; 

    Jay.setScore(12) ; 
    Jay.setAlive(true) ; 
    Jay.setHealth(98) ; 
    Jay.setAge(19) ; 

    player temp = getmaxScore(Jay , Rohan) ; 
    // cout << temp.getscore() ; 
    cout << temp.getage();

}