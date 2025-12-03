/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    void poo(TreeNode* root){
        if(root == NULL)return;
        poo(root->left);
        poo(root->right);
        res.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        poo(root);
        return res;
    }
};