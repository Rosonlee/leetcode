/*
 * @lc app=leetcode.cn id=669 lang=cpp
 *
 * [669] 修剪二叉搜索树
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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root)
            return nullptr;
        if(root->val > high)
        {
            if(!root->left){
                root = nullptr;
            }
            else{
                root = root->left;
                root = trimBST(root, low, high);
            }
        }
        else if(root->val < low)
        {
            if(!root->right)
                root = nullptr;
            else
            {
                root = root->right;
                root = trimBST(root, low, high);
            }
        }
        else{
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
        }
        return root;
    }
};
// @lc code=end

