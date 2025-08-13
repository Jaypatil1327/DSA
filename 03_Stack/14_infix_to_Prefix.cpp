#include <iostream>
#include <stack>

using namespace std;

// Function to return precedence of operators
int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 2; // Higher precedence for * and /
    }
    if (ch == '+' || ch == '-') {
        return 1; // Lower precedence for + and -
    }
    return 0; // Return 0 for non-operators
}

int main() {
    stack<string> val;   // Stack to hold values (operands)
    stack<char> oper;    // Stack to hold operators

    string str = "7+9*4/8-3"; // Input expression
    for (int i = 0; i < str.length(); i++) {
        // If the current character is a digit
        if (isdigit(str[i])) {
            val.push(string(1, str[i])); // Push the digit as a string to the value stack
        } else {
            // While operators stack is not empty and precedence of the top operator is >= current operator
            while (!oper.empty() && precedence(oper.top()) >= precedence(str[i])) {
                // Pop two operands and one operator to create a prefix expression
                string x = val.top();
                val.pop();
                string y = val.top();
                val.pop();

                // Form a new prefix expression with the operator
                string ans = oper.top() + y + x;
                val.push(ans); // Push the result back to the value stack
                oper.pop();    // Pop the operator from the operator stack
            }
            oper.push(str[i]); // Push the current operator to the operator stack
        }
    }

    // Process any remaining operators in the operator stack
    while (!oper.empty()) {
        string x = val.top();
        val.pop();
        string y = val.top();
        val.pop();

        string ans = oper.top() + y + x; // Form a new prefix expression
        val.push(ans); // Push the result back to the value stack
        oper.pop();    // Pop the operator from the operator stack
    }

    // The result on the top of the value stack is the prefix expression
    cout << val.top() << endl;

    return 0;
}
