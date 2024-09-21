#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node*& tail, Node* curr) {
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node* head) {
    Node* zeroHead = new Node(-1); // Dummy node for 0s list
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1); // Dummy node for 1s list
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1); // Dummy node for 2s list
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // Create separate lists for 0s, 1s, and 2s
    while (curr != NULL) {
        int value = curr->data;
        
        if (value == 0) {
            insertAtTail(zeroTail, curr);
        } else if (value == 1) {
            insertAtTail(oneTail, curr);
        } else if (value == 2) {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    
    // Merge 3 sublists
    if (oneHead->next != NULL) {
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    } else {
        zeroTail->next = twoHead->next;
    }
    
    twoTail->next = NULL;
    
    // Setup head 
    head = zeroHead->next;
    
    // Delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with unsorted nodes 0s, 1s, and 2s
    Node* head = new Node(2 );
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(0);
    
    cout << "Original list: ";
    printList(head);
    
    // Sort the list
    head = sortList(head);
    
    cout << "Sorted list: ";
    printList(head);
    
    return 0;
}
