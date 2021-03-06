/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++){
            if(nums[cur] != 0)
                swap(nums[lastNonZeroFoundAt++], nums[cur]);
        }
    }
};
// @lc code=end

