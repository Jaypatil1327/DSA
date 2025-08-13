#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    // Constructor initializes the value and sets next to nullptr
    Node(int val) : val(val), next(nullptr) {}
};

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete the linked list and free memory
void deleteList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

// Function to merge two sorted linked lists
Node* mergeList(Node* head1, Node* head2) {
    // Create a dummy node to simplify edge cases
    Node dummy(-1);
    Node* tail = &dummy;

    Node* a = head1;
    Node* b = head2;

    while (a != nullptr && b != nullptr) {
        if (a->val < b->val) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    // Attach the remaining nodes
    if (a != nullptr) {
        tail->next = a;
    } else {
        tail->next = b;
    }

    return dummy.next;
}

int main() {

    // Create first linked list
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(2);
    Node* d = new Node(3);
    Node* e = new Node(4);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Create second linked list
    Node* a1 = new Node(12);
    Node* b1 = new Node(13);
    Node* c1 = new Node(13);
    Node* d1 = new Node(14);
    Node* e1 = new Node(14);
    Node* f1 = new Node(198);
    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = f1;

    // Merge the lists
    Node* mergedList = mergeList(a1, a);

    // Display the merged list
    cout << "Merged List: ";
    display(mergedList);

    // Clean up memory
    deleteList(a);
    deleteList(a1);
    deleteList(mergedList);

    return 0;
}
