/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int floor[50] = {0};
        floor[0] = 0;
        floor[1] = 1;
        floor[2] = 2;
        for(int i = 3; i <= n; i++){
            floor[i] = floor[i - 1] + floor[i - 2];
        }
        return floor[n];
    }
};
// @lc code=end

