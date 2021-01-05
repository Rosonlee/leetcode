/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int col = matrix[0].size();

        set<int>rows, columns;

        for(int i = 0; i < r; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for(auto ch : rows){
            for(int j = 0; j < col; j++){
                matrix[ch][j] = 0;
            }
        }
        for(auto ch : columns){
            for(int i = 0; i < r; i++){
                matrix[i][ch] = 0;
            }
        }
        return ;

        
    }
};
// @lc code=end

