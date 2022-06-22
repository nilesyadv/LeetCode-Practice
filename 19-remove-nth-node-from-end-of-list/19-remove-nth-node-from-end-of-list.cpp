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
        ListNode* s=head;
        while(s->next!=NULL)
        {
            s=s->next;
            sz++;
        }
        
        if(sz==n) return head->next;
        int p=sz-n;
        int count=1;
        s=head;
         while(s->next!=NULL && count<p)
         {
             s=s->next;
             count++;
         }
         s->next=s->next->next;
         return head;
        
    }
};