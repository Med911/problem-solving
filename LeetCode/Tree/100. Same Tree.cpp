#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;                // Both nodes are null
        if (!p || !q) return false;               // One node is null, one isn't
        if (p->val != q->val) return false;       // Values differ
        return isSameTree(p->left, q->left) &&    // Compare left subtrees
               isSameTree(p->right, q->right);    // Compare right subtrees
    }
};