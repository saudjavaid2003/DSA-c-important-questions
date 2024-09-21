#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
bool searchinbst(node*root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(x>root->data){
        return searchinbst(root->right,x);
    }
    else
        return searchinbst(root->left,x);

}
node*insertbst(node*root,int data){
if(root==NULL){
    root=new node(data);
    return root;
    }
  if(data>root->data){
    root->right=insertbst(root->right,data);
  }
  else
    root->left=insertbst(root->left,data);

}
void takeinput(node*&root){
    int data;
    cout<<"enter thje data"<<endl;
    cin>>data;
    while(data!=-1){
        root=insertbst(root,data);
        cin>>data;
    }
}



int main(){
    node*root=NULL;
    takeinput(root);
    int x;
    cout<<"enter the elemnt to search"<<endl;
cin>>x;
    cout<<searchinbst(root,x)<<endl;

}