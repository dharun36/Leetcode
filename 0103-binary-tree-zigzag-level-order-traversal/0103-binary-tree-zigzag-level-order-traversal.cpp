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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        int order = 0;
        vector<vector<int>> res;
        if(root)
        q.push(root);
        while(q.size()>0){
            int s = q.size();
            vector<int> arr;
            while(s--){
                TreeNode* front = q.front();
                q.pop();
                arr.push_back(front->val);
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);
              

            }
            if(order%2==1){
                reverse(arr.begin(),arr.end());
               
            }
            order++;
            res.push_back(arr);
        }
        return res;
    }
};