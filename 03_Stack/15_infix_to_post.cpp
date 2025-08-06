#include<iostream> 
#include<stack>

using namespace std ; 

int precedence(char ch) {
    if(ch == '*' || ch == '/') return 2 ;
    else return 1 ; 
}

string evaluate(string val1 , string val2 , char ch) {
    return val2 + val1 + ch ; 
}
int main(){
    stack<string> val ; 
    stack<char> op ; 

    string s =  "1*3/4+1/2-1" ; 

    for(int i = 0 ; i < s.length() ; i++){
        if(isdigit(s[i])){
            string str = "" ; 
            str.push_back(s[i]) ; 
            val.push(str) ; 
        } 
        else {
            if(op.size()==0 || precedence(s[i]) > precedence(op.top())) 
                op.push(s[i]) ; 
            else {
                while(!op.empty() && precedence(s[i]) <= precedence(op.top())) {
                    string val1 = val.top() ; 
                    val.pop() ; 
                    string val2 = val.top() ; 
                    val.pop() ; 

                    val.push(evaluate(val1 , val2 , op.top())) ; 
                    op.pop() ; 
                }
                op.push(s[i]) ; 
            }
        }

    }

    while(!op.empty()) {
                    string val1 = val.top() ; 
                    val.pop() ; 
                    string val2 = val.top() ; 
                    val.pop() ; 

                    val.push(evaluate(val1 , val2 , op.top())) ; 
                    op.pop() ; 
                }


                cout << val.top() ; 
}