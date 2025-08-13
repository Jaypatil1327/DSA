#include<iostream>
#include<stack>

using namespace std ;

int evalutate(int x, int y, char oper) {
    if (oper == '+') return x + y ; 
    if (oper == '-') return x - y ; 
    if (oper == '/') return x / y ; 
    if (oper == '*') return x * y ; 
}

int main() {
    stack<int> st ; 

    string str = "-/*+79483" ; 

    for(int i = str.length()-1 ; i >= 0 ; i--) {
        if(isdigit(str[i])) {
            st.push(str[i]-'0') ; 
        }
        else {
            int x = st.top() ; 
            st.pop() ; 
            int y = st.top() ; 
            st.pop() ; 
            st.push(evalutate(x,y,str[i])) ; 
        }
    }

    
    cout << st.top() ;                            
}