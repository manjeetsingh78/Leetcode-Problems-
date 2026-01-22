/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
 */

// @lc code=start
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
    void inorder(TreeNode* root,int& target,int& ans){
        if(root == nullptr) return ;
        inorder(root->left,target,ans);
        target--;
        if(target ==0){
            ans = root->val;
        }
        inorder(root->right,target,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        inorder(root,k,ans);
        return ans;
    }
};
// @lc code=end

