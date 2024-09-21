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
void insertatail(node*&head,node*&tail,int val){
    node*temp=new node(val);
    if(head==NULL){
        head=temp;
        tail=temp;
return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
node* reverse(node*&head){
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
void print(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node*addlinkedlists(node*firsthead,node*secondhead){
    int carry=0;
    node*anshead=NULL;
    node*anstail=NULL;
    while(firsthead!=NULL&&secondhead!=NULL){
        int sum=carry+firsthead->data+secondhead->data;
        int digit=sum%10;
     insertatail(anshead,anstail,digit);
     carry=sum/10;
     firsthead=firsthead->next;
     secondhead=secondhead->next;
    }
    while(firsthead!=NULL){
        int sum=carry+firsthead->data;
        int digit=sum%10;
        insertatail(anshead,anstail,digit);
        carry=sum/10;
        firsthead=firsthead->next;
    }
        while(secondhead!=NULL){
        int sum=carry+secondhead->data;
        int digit=sum%10;
        insertatail(anshead,anstail,digit);
        carry=sum/10;
        secondhead=secondhead->next;
    }
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        insertatail(anshead,anstail,digit);
        carry=sum/10;

    }
    
return anshead;
}






int main(){
    node*node1=new node(4);
    node*firsthead=node1;
    node*firsttail=firsthead;
insertatail(firsthead,firsttail,5);
    node*node2=new node(3);
    node*secondhead=node2;
    node*secondtail=secondhead;
    insertatail(secondhead,secondtail,4);
    insertatail(secondhead,secondtail,5);
    firsthead=reverse(firsthead);
    secondhead=reverse(secondhead);

node*ans=addlinkedlists(firsthead,secondhead);
ans=reverse(ans);
print(ans);





}