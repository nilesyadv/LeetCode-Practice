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
    bool hasCycle(ListNode *head) {
        int maxi=100000,cnt=0;
        ListNode *s=head,*f=head;
        while(s!=NULL && f!=NULL)
        {
            if(s!=NULL) s=s->next;
            if(f!=NULL) f=f->next;
            if(f!=NULL) f=f->next;
            if(s==f && s!=NULL && f!=NULL) return true;
        }
        return false;
    }
};