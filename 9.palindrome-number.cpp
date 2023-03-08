/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x;
        long long int total = 0, remain = 0;
        if(x < 0)
            return false;
        while(temp/10 > 0)
        {
            remain = temp % 10;
            total = total*10 + remain;
            temp /= 10;
        }
        total = total*10 + temp;
        if(x  == total)
            return true;
        else 
            return false;
        return true;
    }
};
// @lc code=end

