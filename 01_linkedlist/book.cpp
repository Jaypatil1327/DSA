#include<iostream>
using namespace std;

class node 
{   public : 
    int val ; 
    node* next  ; 
}; 

int main() {
    node * x = new node ; 
    x->val = 2 ; 
    cout << (x->next) ; 

}