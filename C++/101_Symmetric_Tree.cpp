/**
 * URL: https://leetcode.com/problems/symmetric-tree/
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

    bool isMirror(TreeNode *left_tree, TreeNode *right_tree) {
        if(!left_tree and !right_tree) return true;
        if(!left_tree or !right_tree) return false;
        return (left_tree->val == right_tree->val) and isMirror(left_tree->left, right_tree->right) and isMirror(left_tree->right, right_tree->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isMirror(root->left, root->right);
    }
};