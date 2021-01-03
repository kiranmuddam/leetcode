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
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        ListNode* curr = head;
        
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        if (head == NULL) {
            return true;
        }
        
        if (head -> next == NULL) {
            return true;
        }
        while (fast != NULL && fast-> next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* revStart = reverseList(slow);
        
        while(revStart != NULL) {
            if (revStart-> val != head -> val) {
                return false;
            }
            
            head = head -> next;
            revStart = revStart -> next;
        }
        
        return true;
    }
};