/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    vector<vector<int>> res;
    queue<TreeNode*> que;
    vector<int>stk;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(!node) continue;
                stk.push_back(node->val);
                que.push(node->left);
                que.push(node->right);
            }
            if(!stk.empty())//判断非空加入，防止最后冗余
                res.push_back(stk);
            stk.clear();
        }
        reverse(res.begin(), res.end());
        return res;
}
};
// @lc code=end

