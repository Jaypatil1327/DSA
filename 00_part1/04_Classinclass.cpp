#include<iostream>
using namespace std ;

class Gun {
    public :
      int damage ; 
      int scope ; 
      int ammo ; 
};

class Player { 
    private : 
        string name ; 
        int level ; 
        int hp ; 

        Gun gun ; // if its of class gun then only take it 
    public :

        void setGun(Gun gun) { // gun is a parameter 
            this->gun = gun ; 
        }
        void setName(string name) {
            this-> name = name ; 
        }
        void setLevel(int level) {
            this-> level = level ; 
        }
        void setHp(int hp) {
            this-> hp = hp ; 
        }

        Gun getGun() {
            return gun ; 
        }
        string getName() {
            return name ; 
        }
        int getlevel() {
            return level ; 
        }
        int gethp() {
            return hp ; 
        } 
} ; 

    Gun maxdamage(Gun x , Gun y) {
        if(x.damage > y.damage) return x ; 
        else return y ; 
    }
int main() {

    Gun akm ; 
    akm.damage = 10 ; 
    akm.scope = 6 ; 
    akm.ammo = 150 ; 

    Gun m24 ; 
    m24.damage = 12 ; 
    m24.scope = 4 ; 
    m24.ammo = 240 ; 

    Player Jay ; 
    Jay.setGun(akm) ; 

    Player Rohan ; 
    Rohan.setGun(m24) ; 

    Gun temp = maxdamage(Jay.getGun() , Rohan.getGun()) ;  
    cout << temp.damage << "\n";   
    cout << temp.scope  << "\n";   
    cout << temp.ammo << "\n";   
}
