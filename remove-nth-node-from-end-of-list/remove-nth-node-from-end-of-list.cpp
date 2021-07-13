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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int listLength = 0;
        ListNode* dummy = new ListNode();
        
        dummy->next = head;
        
        ListNode* temp = head;
        
        while (temp != NULL) {
            listLength++;
            temp = temp->next;
        }
        
        listLength -= n;
        temp = dummy;
        
        while (listLength > 0) {
            listLength--;
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
        return dummy->next;
    }
};