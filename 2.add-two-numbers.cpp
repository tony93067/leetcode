/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* now = result;
        int carry= 0;
        while(1)
        {
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            if (now->next == nullptr)
            {
                now->next = new ListNode(sum%10);
                now = now->next;
            }
            carry = sum/10;
           
            if(l1 == NULL && l2 == NULL && carry == 0)
                break;
        }
        return result->next;

    }
};
// @lc code=end

