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
    ListNode* reverseList(ListNode* head) {
        // 0  <-  1  ->  2  ->  3
        // t1     t2
        // 3 -> 2 -> 1 -> 0
        if(!head or !head->next) return head;
        ListNode* t1 = nullptr;
        ListNode* t2 = head;
        while(t2){
            ListNode* t2_next = t2->next;
            t2->next = t1;
            t1 = t2;
            t2 = t2_next;
        }
        return t1;
    }
};
