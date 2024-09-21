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
};

void insertathead(node*& head, int data) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* removeDuplicates(node* head) {
    if (head == NULL) {
        return NULL;
    }

    node* curr = head;
    while (curr != NULL) {
        node* runner = curr;
        while (runner->next != NULL) {
            if (runner->next->data == curr->data) {
                node* temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            } else {
                runner = runner->next;
            }
        }
        curr = curr->next;
    }

    return head;
}

int main() {
    node* head = new node(1);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 4);
    insertathead(head, 3);

    cout << "Original List: ";
    print(head);

    head = removeDuplicates(head);

    cout << "List after removing duplicates: ";
    print(head);

    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
