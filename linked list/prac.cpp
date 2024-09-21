#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void insertathead(node*&head,int data){
    node*temp=new node(1);
    if(head==NULL){
temp->next=head;
head=temp;
    }
}



node* reverseinkgroups(node*&head,int k){
    if(head==NULL){
        return head;
    }
    node*prev=NULL;
    node*next=NULL;
    node*curr=head;
int count=0;
    while(curr!=NULL&&count<k){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
    }
    if(next!=NULL){
        head->next=reverseinkgroups(next,2);
    
    }
    return prev;
    
}