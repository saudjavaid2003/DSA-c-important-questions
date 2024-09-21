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
node*deletioninbst(node*root,int val){
    if(root==NULL){
        return NULL;
    }
    // 0child
if(root->data==NULL){
    if(root->right==NULL&&root->left==NULL)
    {
        delete root;
        return NULL;
    }
    // 1 child
    if(root->right!=NULL&&root->left==NULL){
        node*temp=root->right;
        delete root;
        return temp;
    }
    // right child
        if(root->right==NULL&&root->left!=NULL){
        node*temp=root->left;
        delete root;
        return temp;
    }
    // both chi;d
    if()

}
else if(val>root->data){
    root->right=deletioninbst(root->right,val);
    return root;
}

else{
     root->left=deletioninbst(root->left,val);
    return root;
}

}



