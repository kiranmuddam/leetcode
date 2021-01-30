/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        
        ListNode* first = head;
        ListNode* second = head;
        while (first != NULL && first->next != nullptr) {
            first = first->next->next;
            second = second->next;
            
            if (first == second) {
                break;
            }
            
        }
        
        if (first != second) {
            return NULL;
        }
        
        first = head;
        
        
        while (first != second) {
            first =  first->next;
            second = second->next;
        }
        
        return first;
    }
};