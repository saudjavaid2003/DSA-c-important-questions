#include <iostream>
#include <vector>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform in-order traversal and store values in a vector
void inorderTraversal(TreeNode* root, std::vector<int>& vec) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left, vec);
    vec.push_back(root->val);
    inorderTraversal(root->right, vec);
}

// Function to find predecessor and successor
void findPredecessorAndSuccessor(const std::vector<int>& vec, int target, int& predecessor, int& successor) {
    auto it = std::find(vec.begin(), vec.end(), target);
    if (it != vec.end()) {
        int index = std::distance(vec.begin(), it);

        // Find predecessor
        if (index > 0) {
            predecessor = vec[index - 1];
        } else {
            predecessor = -1; // No predecessor
        }

        // Find successor
        if (index < vec.size() - 1) {
            successor = vec[index + 1];
        } else {
            successor = -1; // No successor
        }
    } else {
        predecessor = -1; // Target not found
        successor = -1;
    }
}

int main() {
    // Example tree:
    //       20
    //      /  \
    //     10   30
    //    / \   / \
    //   5  15 25  35

    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(10);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(15);
    root->right->left = new TreeNode(25);
    root->right->right = new TreeNode(35);

    std::vector<int> inorderValues;
    inorderTraversal(root, inorderValues);

    int target = 15; // Node for which we want to find predecessor and successor
    int predecessor, successor;

    findPredecessorAndSuccessor(inorderValues, target, predecessor, successor);

    std::cout << "Predecessor: " << (predecessor == -1 ? "None" : std::to_string(predecessor)) << std::endl;
    std::cout << "Successor: " << (successor == -1 ? "None" : std::to_string(successor)) << std::endl;

    return 0;
}
