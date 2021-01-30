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
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        
        while (first != NULL && first->next != NULL && first->next->next != NULL) {
            first = first->next->next;
            second = second->next;
        }
        
        if (first->next == NULL) {
            return second;
        } else {
            return second->next;
        }
        
    }
};