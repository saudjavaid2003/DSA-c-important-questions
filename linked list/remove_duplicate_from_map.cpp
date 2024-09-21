#include <iostream>
#include <map>
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

    map<int, bool> visited;
    node* curr = head;
    node* prev = NULL;
    
    while (curr != NULL) {
        if (visited[curr->data]) {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
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

    // Free the memory allocated for the list
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
