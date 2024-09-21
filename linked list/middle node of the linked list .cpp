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

void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
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

int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        length++;
    }
    return length;
}

Node* getMiddleNode(Node* head) {
    int len = getLength(head);
    int ans = len / 2;
    Node* temp = head;
    int count = 0;
    while (count < ans) {
        temp = temp->next;
        count++;
    }
    return temp;
}

int main() {
    Node* head = new Node(10);

    for (int i = 0; i < 3; i++) {
        int value;
        cout << "Enter the value for the linked list: ";
        cin >> value;
        insertAtHead(head, value);
    }

    print(head);

    Node* middle = getMiddleNode(head);
    cout << "Middle Node Data: " << middle->data << endl;

    return 0;
}
