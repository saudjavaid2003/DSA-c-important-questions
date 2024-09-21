#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseRecursively(Node*& head, Node* current, Node* prev) {
    if (current == nullptr) {
        head = prev;
        return head;
    }
    Node* forward = current->next;
    reverseRecursively(head, forward, current);
    current->next = prev;
    return head;
}

int main() {
    Node* head = nullptr;

    for (int i = 0; i < 3; i++) {
        int value;
        cout << "Enter the value for the linked list: ";
        cin >> value;
        insertAtHead(head, value);
    }

    cout << "Original Linked List: ";
    print(head);

    Node* current = head;
    Node* prev = nullptr;

    Node* reversedHead = reverseRecursively(head, current, prev);
    cout << "Reversed Linked List: ";
    print(reversedHead);

    return 0;
}
