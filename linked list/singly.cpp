#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(node*& head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(node*& tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(node*& head, node*& tail, int position, int d) {
    node* temp = head;
    int count = 1;
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }
    while (count < position - 1) {
        temp = temp->next;
        count++;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    if (nodeToInsert->next == NULL) {
        tail = nodeToInsert;
    }
}

void deleteNode(int position, node*& head, node*& tail) {
    if (position == 1) {
        node* temp = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        temp->next = NULL;
        delete temp;
    } else {
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while (cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        if (curr->next == NULL) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main() {
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtMiddle(head, tail, 3, 15);
    print(head);

    deleteNode(3, head, tail);
    print(head);



    return 0;
}
