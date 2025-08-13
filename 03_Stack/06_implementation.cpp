#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->next = NULL;
        this->val = val;
    }
};

class Stack {
public:
    int size;
    Node* head;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push(int val) {
        Node* newHead = new Node(val);
        newHead->next = head;
        head = newHead;
        size++;
    }

    void pop() {
        if (size == 0) {
            cout << "Underflow" << endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp; // Free memory of the popped node
            size--;
        }
    }

    int top() {
        if (size == 0) {
            cout << "Underflow" << endl;
            return -1; // Return a special value to indicate stack is empty
        } else {
            return head->val;
        }
    }

    int getSize() {
        return size;
    }

    void display() {
        Node* x = head;
        displayRecursive(x);
        cout << endl;
    }

private:
    void displayRecursive(Node* x) {
        if (!x) return;
        displayRecursive(x->next);
        cout << x->val << " ";
    }
};

int main() {
    Stack s; // Proper initialization of the stack object

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements (bottom to top): ";
    s.display();

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.getSize() << endl;

    s.pop();
    cout << "After pop, top element: " << s.top() << endl;
    cout << "Stack size: " << s.getSize() << endl;

    s.display();

    return 0;
}
