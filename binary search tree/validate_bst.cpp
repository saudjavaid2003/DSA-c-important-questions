class Solution {
private:
    bool isvalidbst(TreeNode* root, long val1, long val2) {
        if (root == NULL) {
            return true;
        }
        if (root->val > val1 && root->val < val2) {
            bool left = isvalidbst(root->left, val1, root->val);
            bool right = isvalidbst(root->right, root->val, val2);
            return left && right;
        }
        return false;  // Return false if the current node's value is not within the valid range
    }

public:
    bool isValidBST(TreeNode* root) {
        return isvalidbst(root, INT_MIN, INT_MAX);
    }
};

// ya int_Min and int _Max kerlay ;
// yar ranges hain kay shoro wlai node -infiity say infirnity tuk left may 
// -infiinity say root->data; 
// right side per
// root->data say inifity
/// aur ek next level property inorder traversal is sorted?
