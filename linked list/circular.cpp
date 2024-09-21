#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=next;
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
void insert(node*&tail,int element,int data){
    if(tail==NULL){
        node*newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;//tail;
    }
    else{
        node*current=tail;
        while(current->data!=element){
            current=current->next;
        }
        node*temp=new node(data);
        temp->next=current->next;
        current->next=temp;
    }
}
void deleteNode(node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

void print(node* tail) {

    node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

int main(){
    node*tail=NULL;
    insert(tail,5,6);
    insert(tail,6,2);
    insert(tail,6,1);
    print(tail);

    
}