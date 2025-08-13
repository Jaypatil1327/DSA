#include <stack>
#include <iostream>
#include <string>
using namespace std;

// Function to return precedence of operators
int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 2;
    }
    if (ch == '+' || ch == '-') {
        return 1;
    }
    return 0; // Return 0 for non-operators
}

// Function to perform operations
int operation(int num1, int num2, char op) {
    if (op == '*') return num2 * num1;
    if (op == '/') return num2 / num1;
    if (op == '+') return num2 + num1;
    if (op == '-') return num2 - num1;
    return 0;
}

int main() {
    stack<int> num; // Stack to store numbers
    stack<char> op; // Stack to store operators

    string str = "2+2+2/2+2";

    for (int i = 0; i < str.length(); i++) {
        // If the character is a digit, push it to the number stack
        if (isdigit(str[i])) {
            num.push(str[i] - '0');
        } else {
            // Process operators according to precedence
            while (!op.empty() && precedence(str[i]) <= precedence(op.top())) {
                int val1 = num.top();
                num.pop();
                int val2 = num.top();
                num.pop();
                
                int ans = operation(val1, val2, op.top());
                num.push(ans);
                op.pop();
            }
            op.push(str[i]);
        }
    }

    // Process the remaining operators in the stack
    while (!op.empty()) {
        int val1 = num.top();
        num.pop();
        int val2 = num.top();
        num.pop();

        int ans = operation(val1, val2, op.top());
        num.push(ans);
        op.pop();
    }

    // Output the final result
    cout << num.top();

    return 0;
}
