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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* prev = dummy;
        int rem = 0;
        while (l1 != NULL || l2 != NULL) {
            int val1 = 0, val2 = 0;
            if (l1 != NULL) {
                val1 = l1 -> val;
                l1 = l1 -> next;
            }
            
            if (l2 != NULL) {
               val2 = l2 -> val;
               l2 = l2 -> next;
            } 
                        
            int sum = val1 + val2 + rem;
            int val = sum % 10;
            rem = sum > 9 ? 1 : 0;
            
            ListNode * temp = new ListNode(val);
            dummy -> next = temp;
            dummy = dummy -> next;
            
        }
        
        if (rem != 0) {
            ListNode * temp = new ListNode(rem);
            dummy -> next = temp;
        }
        
        return prev -> next;
    }
};