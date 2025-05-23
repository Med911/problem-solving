class Solution {
    public:
        void solve(TreeNode * root, vector<int> & ans) {
            if (root == nullptr) return;
            solve(root->left, ans);
            ans.push_back(root->val);
            solve(root->right, ans);
            return;
        }
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> ans;
            solve(root, ans);
            return ans;
        }
    };