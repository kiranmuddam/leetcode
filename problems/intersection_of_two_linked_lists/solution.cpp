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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> nodeMap;
        
        while (headB != NULL) {
            nodeMap.insert(headB);
            headB = headB -> next;
        }
        
        while (headA != NULL) {
            if (nodeMap.find(headA) != nodeMap.end()) {
                return headA;
            }
            
            headA = headA -> next;
        }
        
        return nullptr;
    }
};