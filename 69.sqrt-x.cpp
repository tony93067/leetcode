/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int first = 1, last = x, mid = 0;
        int ans;
        if(x == 0)
            return 0;
        while(first <= last)
        {
            mid =first + (last-first)/2;
            if(mid == x / mid)
                return mid;
            else if (mid > x / mid)
                last = mid - 1;
            else
            {
                first = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};
// @lc code=end

