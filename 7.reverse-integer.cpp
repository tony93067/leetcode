/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long  remain = 0, number = x, result = 0;
        
        while(number != 0)
        {
            result = result * 10 + number % 10;
            number /= 10;
        }
        if(result > INT_MAX || result < INT_MIN) return 0;
        return result;
    }
};
// @lc code=end

