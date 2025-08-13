#include<iostream>
#include<vector>

using namespace std ; 

class MyCircularDeque {
public:
    vector<int> v ; 
    int size ; 
    int fst , lst ; 
    MyCircularDeque(int k) {
        vector<int> temp(k) ; 
        v = temp ; 

        fst = -1 ; 
        lst = -1; 
        size = 0 ;  
    }
    
    bool insertFront(int value) {
        if(size > v.size()) return false ; 
        else {
            if(fst == -1){
                fst = 0 ; 
            }
            fst-- ; 
            if(fst == 0) fst = v.size()-1 ; 

            v[fst] = value ; 
            size = v.size() - (fst + lst + 1) ; 
            return true ; 
        }
    }
    
    bool insertLast(int value) {
        if(size > v.size()) return false ; 
        else {
            if(lst==-1) lst = 0 ; 
            lst++ ;  
            lst = lst % v.size() ; 

            cout << v[lst] << "ITs inside fun" ; 
            size = v.size() - (fst + lst + 1) ; 
            return true ; 
        }
    }
    
    bool deleteFront() {
        if(size > v.size() || fst == -1) return false ;
        fst++ ; 
        fst = fst % v.size() ; 
        size = v.size() - (fst + lst + 1) ; 
        return true ; 
    }
    
    bool deleteLast() {
        if(size > v.size() || lst == -1) return false ; 
        else {
            lst++ ; 
            lst = lst % v.size() ; 
            size = v.size() - (fst + lst + 1) ; 
            return true ; 
        } 
    }
    
    int getFront() {
        return v[lst] ;  
    }
    int getRear() {
        return v[fst] ; 
    }
    
    bool isEmpty() {
        if(size > v.size()) return false  ; 
        else return true ; 
    }
    
    bool isFull() {
         if(size > v.size()) return true ; 
        else return false ; 
    }
};


int main(){
    
    MyCircularDeque q(4) ; 
    q.insertFront(12)  ;
    q.insertFront(11)  ;
    q.insertFront(13); 
    q.insertLast(133) ;

    cout << q.getFront() ; 
    

}