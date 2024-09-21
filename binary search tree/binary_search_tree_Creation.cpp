#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
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

void levelordertraversal(node* root) {
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void takeinput(node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = insertinbst(root, data);
        cin >> data;
    }
}

int main() {
    node* root = NULL;
    cout << "Enter the data for the BST (enter -1 to stop):" << endl;
    takeinput(root);
    cout << "Printing the tree:" << endl;
    levelordertraversal(root);
}
