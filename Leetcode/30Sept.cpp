#include<iostream>
#include<vector>

using namespace std ; 

class CustomStack {
public:
    vector<int> s ; 
    int ft = -1 ;
    int size ;  
    CustomStack(int maxSize) {
        s.resize(maxSize) ;
        size = maxSize-1 ; 
    }
    
    void push(int x) {
        if(ft == size) return ; 
        else {
            size++ ; 
            ft++ ; 
            s[ft] = x ; 
        }
     }
    
    int pop() {
        if(ft == -1) return -1 ; 
        else {
            size-- ;
            ft-- ; 
            return (ft == -1 ? -1 : s[ft]) ; 
        }
    }
    
    void increment(int k, int val) {
        int inc = k; 
        if(size > k) {
            inc = ft ; 
        }

        for(int i = 0 ; i < k ; i++){
            s[i]+=val ; 
        }
    }

    void display(){
        for(int i = ft ; i >= 0 ; i--){
            cout << "|  " << s[i] << "  |\n" ; 
        } 
        cout << "_______" ; 
    }
};

int main(){
    CustomStack s(4) ; 
    s.push(12) ; 
    s.push(15) ; 
    s.push(13) ; 
    s.push(14) ; 

    cout << s.pop() << endl  ; 
    
    s.increment(4,1) ; 
    s.display() ;

}
