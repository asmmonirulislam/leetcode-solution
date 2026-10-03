/**
 * URL: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root) return ans;
        stack<pair<TreeNode*, bool>>s;
        s.push({root, false});
        while(!s.empty()) {
            TreeNode *node = s.top().first;
            bool flag = s.top().second;
            s.pop();
            if(!flag) {
                if(node->right) s.push({node->right, false});
                s.push({node, true});
                if(node->left) s.push({node->left, false});
            }else {
                ans.push_back(node->val);
            }
        }
        return ans;
    }
};