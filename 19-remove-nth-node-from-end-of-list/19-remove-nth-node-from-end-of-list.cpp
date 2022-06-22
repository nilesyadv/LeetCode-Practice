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
        int sz=1;
        ListNode* s=head,*q=head;
        while(s->next!=NULL)
        {
            s=s->next;
            sz++;
            if(sz-n>1) q=q->next;
        }
        if(sz==n)
        {
            ListNode* temp=head->next;
            delete(head);
            return temp;
        }
        
         ListNode* temp=q->next;
         q->next=q->next->next;
         delete(temp);
         return head;
        
    }
};