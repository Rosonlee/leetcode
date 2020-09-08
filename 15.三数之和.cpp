/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int first = 0; first < n; ++first){
            if(first > 0 and nums[first] == nums[first - 1]){
                continue;
            }
            int third = n -1;
            int target = -nums[first];

            for(int second = first + 1; second < n; ++second){
                if (second > first+ 1 and nums[second] == nums[second - 1])
                continue;
                while(second < third and nums[second] + nums[third] > target)
                    --third;
                if (second == third) break;
                if(nums[second] + nums[third] == target)
                    ans.push_back({nums[first], nums[second], nums[third]});
            }
        }
        return ans;


    }
};
// @lc code=end

