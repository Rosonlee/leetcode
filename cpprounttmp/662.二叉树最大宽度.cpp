/*
 * @lc app=leetcode.cn id=662 lang=cpp
 *
 * [662] 二叉树最大宽度
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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 1});
        int ans = 1;
        while(!q.empty()){
            int sz = q.size();
            ans = max(int(q.back().second - q.front().second + 1), ans);
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front().first;
                unsigned long long pos = q.front().second;
                q.pop();
                if (node->left) q.push({node->left, 2*pos});
                if (node->right) q.push({node->right, 2*pos+1});
            }
        }
        return ans;
    }
};
// @lc code=end

