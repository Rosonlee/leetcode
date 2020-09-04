/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第K小的元素
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
    int count = 0;
    int ans;
    int kthSmallest(TreeNode* root, int k) {
        dfs(root, k);
        return ans;
    }
    void dfs(TreeNode* node, int k){
        if(!node) return ;
        dfs(node->left, k);
        count += 1;
        if (count == k) ans = node->val;
        dfs(node->right, k);
    }
};
// @lc code=end

