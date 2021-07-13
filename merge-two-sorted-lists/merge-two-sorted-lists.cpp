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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode();
        ListNode *tail = result;
        
        
        while (l1 != NULL || l2 !=NULL) {
            int l1Value = INT_MAX;
            int l2Value = INT_MAX;
            
            if (l1 != NULL) {
                l1Value = l1->val;
            }
            
            if (l2 != NULL) {
                l2Value = l2->val;
            }
            
            if (l1Value <= l2Value) {
                ListNode* temp = new ListNode(l1Value);
                tail->next = temp;
                l1 = l1->next;
                tail = tail->next;
            } else {
                ListNode* temp = new ListNode(l2Value);
                tail->next = temp;
                l2 = l2->next;
                tail = tail->next;
            }
        }
        
        return result->next;
        
    }
};