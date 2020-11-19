/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p == root or q == root)
            return root;
        if(p->val > q->val)
            {
                TreeNode* tmp = q;
                q = p;
                p = tmp;
            }
        if(p->val < root->val and q->val > root->val)
            return root;
        else if(p->val < root->val and q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else 
            return lowestCommonAncestor(root->right, p, q);
    }
};
// @lc code=end

