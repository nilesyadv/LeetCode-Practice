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
    void reverse(ListNode* s,ListNode* e)
    {
        ListNode *p=NULL,*c=s,*n=s->next;
        while(p!=e)
        {
            c->next=p;
            p=c;
            c=n;
            if(n->next!=NULL) n=n->next;
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* s=head,*e=head;
        if(head==NULL || k==1 || head->next==NULL) return head;
        
        int p=k-1;
        while(p--)
        {
            e=e->next;
            if(e==NULL) return head;
        }
        
        ListNode *newHead=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=newHead;
        return e;
    }
};