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
    // Destructor should not delete the entire list to avoid premature deletion.
    ~node() {
        // Uncomment the following lines if you want to see when a node is destroyed
        // int value = this->data;
        // cout << "Memory is free for node with data " << value << endl;
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

node* removeduplicate(node* head) {
    if (head == NULL) {
        return NULL;
    }
    node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            node* next_next = curr->next->next;
            node* temp = curr->next;
            delete temp;
            curr->next = next_next;
        } else {
            curr = curr->next;
        }
    }
    return head;
}

int main() {
    node* head = new node(1);
    insertathead(head, 1);
    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 2);
    insertathead(head, 2);
    insertathead(head, 3);
    
    cout << "Original List: ";
    print(head);

    node* head1 = removeduplicate(head);
    
    cout << "List after removing duplicates: ";
    print(head1);


    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
