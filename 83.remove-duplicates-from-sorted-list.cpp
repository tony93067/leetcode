/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr = head;

        if(ptr == nullptr)
            return head;
        while(ptr->next != nullptr)
        {
            if(ptr->val == ptr->next->val)
                ptr->next = ptr->next->next;
            else if(ptr->val != ptr->next->val)
                ptr = ptr->next;
        }
        return head;
    }
};
// @lc code=end

