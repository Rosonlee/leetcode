/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        const auto p = minmax_element(strs.begin(), strs.end());
        for(int i = 0; i< p.first->size(); i++)
            if (p.first->at(i) != p.second->at(i)) return p.first->substr(0, i);
        return *p.first;
        
    }
};
// @lc code=end

