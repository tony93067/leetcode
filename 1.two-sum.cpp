/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = nums.size() - 1; i > 0 ; i--){
            for(int j = 0; j < i; j++){
                if(nums[j] + nums[i] == target){
                    result.push_back(j);
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};
// @lc code=end

