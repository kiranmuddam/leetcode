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
    ListNode* swapNodes(ListNode* head, int k) {
       int listLength = 0;
        ListNode* dummy = new ListNode(0);
        
        dummy->next = head;
        
        ListNode* temp = head;
        ListNode* temp1 = head;
        
        while (temp != NULL) {
            listLength++;
            temp = temp->next;
        }
        
        listLength -= k;
        
        temp1 = dummy;
        
        int lenBeg = k;
        while (lenBeg>0) {
            lenBeg--;
            temp1 = temp1->next;
        }
        
        temp = dummy;
        
        while (listLength > 0){
            listLength--;
            temp = temp->next;
        }
        
        temp = temp->next;
        
        //ut << temp->val << endl;
        //ut << temp1->val <<endl;
        
        int val2 = temp->val;
        
        temp -> val = temp1->val;
        temp1->val = val2;
        
        return dummy->next;
    }
    
};