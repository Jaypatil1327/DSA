#include<iostream>
#include<vector>
using namespace std ;

class player {

    string name ; 
    int age ; 

    public :

    void setName(string name) {
        this->name = name ; 
    }
    void setAge(int age) {
        this-> age = age ; 
    }
    string getName(){ return name ;} 
    int getAge(){ return age ;} 
};

void printer(player x) {
    cout << "Name of player " << x.getName() << endl  ; 
    cout << "Age of Player " << x.getAge() << endl; 
}

int main() {

    int num ; 
    cin >> num ; 

    vector<player*> allplayer ; 

    for(int i = 0 ; i < num ; i++) {  
        player * all = new player ; 
        int age ; string str ; 
        cout << "Enter the name : " ; 
        cin >> str ; 
        cout << "Enter the age : " ; 
        cin >> age ; 

        all->setAge(age) ; 
        all->setName(str) ; 
        allplayer.push_back(all) ;  
    }
    
    for(int i = 0 ; i < allplayer.size() ; i++) {
        printer(*allplayer[i]) ; 
    }
}