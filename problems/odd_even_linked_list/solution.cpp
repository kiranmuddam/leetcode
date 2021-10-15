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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even = new ListNode();
        ListNode* odd = new ListNode();
        ListNode* dummy = new ListNode();
        ListNode* dummy1 = new ListNode();
        dummy = even;
        dummy1 = odd;
        int count = 0;
        while (head != NULL) {
            count++;
            if (count % 2 != 0) {
                even -> next = head;
                even = even -> next;
            } else {
                odd -> next = head;
                odd = odd -> next;
            }
            
            head = head -> next;
        }        
        odd -> next = NULL;
        even -> next = dummy1 -> next;
        
        
        
        return dummy -> next;
    }
};