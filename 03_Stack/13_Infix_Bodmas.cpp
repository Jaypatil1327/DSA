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

// Function to evaluate the expression inside the stacks
void evaluateTop(stack<int>& num, stack<char>& op) {
    int val1 = num.top(); num.pop();
    int val2 = num.top(); num.pop();
    int ans = operation(val1, val2, op.top());
    op.pop();
    num.push(ans);
}

int main() {
    stack<int> num; // Stack to store numbers
    stack<char> op; // Stack to store operators

    string str = "2+(3*2)-2/2"; // Sample expression with brackets

    for (int i = 0; i < str.length(); i++) {
        // If the character is a digit, push it to the number stack
        if (isdigit(str[i])) {
            num.push(str[i] - '0');
        } 
        else if (str[i] == '(') {
            op.push(str[i]);
        } 
        else if (str[i] == ')') {
            // Process all operators until '(' is found
            while (!op.empty() && op.top() != '(') {
                evaluateTop(num, op);
            }
            op.pop(); // Pop the '('
        } 
        else {
            // Handle operators with precedence
            while (!op.empty() && precedence(str[i]) <= precedence(op.top())) {
                evaluateTop(num, op);
            }
            op.push(str[i]);
        }
    }

    // Process the remaining operators in the stack
    while (!op.empty()) {
        evaluateTop(num, op);
    }

    // Output the final result
    cout << num.top() << endl;

    return 0;
}
