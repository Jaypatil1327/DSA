#include<iostream>
#include<stack>

using namespace std ; 


void fill_stack(stack<int> &s , stack<int> &temp) {
    while(s.size()){ 
        cout << s.top() << " "; 
        temp.push(s.top()) ; 
        s.pop() ; 
    }
    cout << endl ; 
}

int main(){
    stack<int> st ; 

    st.push(10) ;  
    st.push(20) ;  
    st.push(40) ;  
    st.push(50) ;  
    st.push(50) ;  
    st.push(30) ;  
    st.push(20) ;  
    st.push(10) ;  
    st.push(40) ;  

    stack<int> temp ; 
    stack<int> temp2 ; 
    fill_stack(st ,temp) ; 
    fill_stack(temp , temp2) ; 
    fill_stack(temp2 , st) ; 

    stack<int> printer ; 
    fill_stack(st , printer);
}