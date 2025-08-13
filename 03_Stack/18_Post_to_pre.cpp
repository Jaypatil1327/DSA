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
    stack<string> st ; 

    string str = "79+4*8/3-" ; 

    for(int i = 0 ; i < str.length() ; i++) {
        if(str[i] >= '0' && str[i] <= '9') st.push(to_string(str[i]-'0')) ;    
        else {                                       
            if(!st.empty()) {
                string  x = st.top() ; 
                st.pop() ; 
                string y = st.top() ; 
                st.pop() ; 

                string ans = "" ; 
                ans.push_back(str[i]) ; 
                ans+=y+x ; 
                st.push(ans) ; 
            }
        }
    }
    cout << st.top() ;                             
}