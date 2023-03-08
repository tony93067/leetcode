/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
        int lengthOfLongestSubstring(string s) {
        int res = 0, left = -1;
        unordered_map<int, int> m;
        for(int i = 0; i < s.length(); i++) {
            if (m.count(s[i]) && m[s[i]] > left) {
                left = m[s[i]];  
            }
            m[s[i]] = i;
            res = max(res, i - left); 
        }
        return res;
    }
   
};
// @lc code=end

