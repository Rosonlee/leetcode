/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        if (N <= 1) return N;
        if(N == 2) return 1;
        int current = 0;
        int prev1 = 1;
        int prev2 = 1;
        for(int i =3; i <= N; i++){
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return current;
    }
};
// @lc code=end

