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
node* rverselinedlist(node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*current=head;
    node*prev=NULL;
    node*forward=current->next;
while(current!=NULL){
    forward=current->next;
    current->next=prev;
    prev=current;
    current=forward;
}
return prev;

}
void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

        node* node1 = new node(10);
    node* head = node1;


    for (int i = 0; i < 3; i++) {
        int value;
        cout << "Enter the value for the linked list: ";
        cin >> value;
        insertathead(head, value);
    }

    print(head);
    node*prev1=rverselinedlist(head);
    print(prev1);

    return 0;
}

