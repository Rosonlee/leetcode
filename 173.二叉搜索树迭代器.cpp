/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
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
class BSTIterator {
public:
    stack<TreeNode* > stk;
    BSTIterator(TreeNode* root) {
        TreeNode* cur = root;
        while(cur){
            stk.push(cur);
            cur = cur->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* node = stk.top();
        stk.pop();
        int ans = node->val;
        node = node->right;
        while(node){
            stk.push(node);
            node = node->left;
        }
        return ans;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return stk.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

