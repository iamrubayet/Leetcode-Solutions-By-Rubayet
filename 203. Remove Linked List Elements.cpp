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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* psuedo_head = new ListNode(0);
        
        psuedo_head->next = head;
        
        ListNode *cur = psuedo_head;
        
        while(cur)
        {
            if(cur->next && cur->next->val == val) cur->next = cur->next->next;
            else
                cur = cur->next;
            
        }
        return psuedo_head->next;
        
    }
};