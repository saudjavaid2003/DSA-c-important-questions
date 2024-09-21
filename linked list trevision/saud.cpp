#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

node* reverse(node*& head) {
    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;

    while (curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;  // New head after reversing
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertathead(node*& head, int data) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

int main() {
    node* head = NULL;

    insertathead(head, 2);
    insertathead(head, 1);
    insertathead(head, 6);
    insertathead(head, 9);

    // Reverse the linked list and update the head
    head = reverse(head);

    // Print the reversed linked list
    print(head);

    return 0;
}
