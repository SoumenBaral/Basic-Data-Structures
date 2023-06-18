#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_head_tail(Node* head, Node* tail) {
    cout << head->val << " " << tail->val << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insert_at_head(head, tail, V);
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        }
        print_head_tail(head, tail);
    }
    return 0;
}
