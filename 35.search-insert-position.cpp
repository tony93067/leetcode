/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int i = 0, j = length - 1;
        while(i <= j)
        {
            int index = (i + j) / 2;
            if(nums[index] == target)
                return index;
            if(nums[index] < target)
                i = index + 1;
            else if(nums[index] > target)
                j = index - 1;
        }
        return i;
    }
};
// @lc code=end

