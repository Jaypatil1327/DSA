#include<iostream>
#include<stack>

using namespace std ;

int main() {
    stack<string> st ; 

    string str = "-/*+79483" ; 

    for(int i = str.length()-1 ; i >= 0 ; i--) {
        if(str[i] >= '0' && str[i] <= '9') st.push(to_string(str[i]-'0')) ;    
        else {                                       
            if(!st.empty()) {
                string  x = st.top() ; 
                st.pop() ; 
                string y = st.top() ; 
                st.pop() ; 

                x.push_back(str[i]) ; 
                x+=y ;
                st.push(x) ; 
            }
        }
    }
    cout << st.top() ;                             
}