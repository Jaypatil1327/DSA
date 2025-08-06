#include<iostream>
#include<stack>

using namespace std ;

int evalutate(int x, int y, char oper) {
    if (oper == '+') return y + x ; 
    if (oper == '-') return y - x ; 
    if (oper == '/') return y / x ; 
    if (oper == '*') return y * x ; 
}

int main() {
    stack<int> st ; 

    string str = "79+4*8/3-" ; 

    for(int i = 0 ; i < str.length() ; i++) {
        if(isdigit(str[i])) st.push(str[i]-'0') ;    // aagar digit ho toh put in stack 
        else {                                       // aur aur else solve it and put that element in a stack 
            if(!st.empty()) {
                int x = st.top() ; 
                st.pop() ; 
                int y = st.top() ; 
                st.pop() ; 

                st.push(evalutate(x,y,str[i])) ; 
            }
        }
    }
    cout << st.top() ;                              // dooooom solved 
}