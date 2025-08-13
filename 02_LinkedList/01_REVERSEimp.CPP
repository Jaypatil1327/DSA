#include<iostream> 
using namespace std ; 

class ListNode {
    public : 
        int val ; 
        ListNode* next ;

        ListNode(int val){
            this->next = NULL ; 
            this->val = val ; 
        } 
};

 ListNode * reverseI(ListNode * head) {
        // using three pointer 
        ListNode * Next = NULL ; 
        ListNode * prev = NULL ; 
        ListNode * curr = head ; 

        while(curr) {
            Next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = Next ; 
        }
        return prev ; 
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head ;
        ListNode* temp = head ; 
        ListNode* a = NULL ; 
        ListNode* b = NULL ; 
        ListNode* c = NULL ;
        ListNode* d = NULL ; 
        int n = 1 ; 
        while(temp) {
            if(left-1 == n) a = temp ; 
            if(left == n) b = temp ; 
            if(right == n) c = temp ; 
            if(right+1 == n) d = temp ; 
            n++ ; 
            temp = temp->next ;  
        }
        if(a) a->next = NULL ; 
        c->next = NULL ; 
        c = reverseI(b) ; 
        if(a) a->next = c ;
        b->next = d ; 
        
        if(!a) return c ; 
        return head ; 
    }
    

    int main() {
    ListNode* a = new ListNode(10) ;
    ListNode* b = new ListNode(20) ;
    ListNode* c = new ListNode(30) ;
    ListNode* d = new ListNode(40) ;
    ListNode* e = new ListNode(50) ;

    }