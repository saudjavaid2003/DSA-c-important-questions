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


node* insertinbst(node* root, int data) {
    if (root == NULL) {
        root = new node(data);
        return root;
    }
    if (data > root->data) {
        root->right = insertinbst(root->right, data);
    } else {
        root->left = insertinbst(root->left, data);
    }
    return root;
}

void takeinput(node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = insertinbst(root, data);
        cin >> data;
    }
}
void inorder(node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int solvekthsmallest(node*root,int i,int k){
    if(root==NULL){
        return -1;
    }
    int left=solvekthsmallest(root->left,i,k);
    if(left!=-1){
        return left;

    }
    i++;
    if(i==k){
        return root->data;
    }
    int right=solvekthsmallest(root->right,i,k);
    if(right!=-1)
    return right;

}