#include<iostream>
using namespace std ;

class Stack{
    int arr[10] ;
    int idx = -1 ; 

    public :
        void _push(int val) {
            if(idx == (sizeof(arr)/sizeof(arr[0]))-1){
                cout << "Oversflowed \n";
            }
            idx++ ;
            arr[idx] = val ; 
        }
        void _pop(){
            if(idx == -1){
                cout << "UnderFlowed" ; 
            }
            else idx-- ; 
        }
        int _top(){
            if(idx == -1){
                cout << "UnderFlowed" ; 
            }
            else return arr[idx] ; 
        }
        int _size(){
            return idx+1 ; 
        }
        bool _empty(){
            if(idx == -1){
                return false ; 
            }
            else return true ; 
        }
};

// void display(Stack s) {
//     Stack temp ; 
//     while(s._empty()) {
//         temp._push(s._top()) ; 
//         s._pop() ; 
//     }

//     while(temp._size()) {
//         cout << temp._top() << " " ; 
//         s._push(temp._top()) ; 
//         temp._pop() ; 
//     }
// }

int main(){
    Stack s ; 

    // write According to you :: 
}