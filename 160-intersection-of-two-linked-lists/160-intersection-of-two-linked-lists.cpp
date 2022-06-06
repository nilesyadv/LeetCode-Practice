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
        map<ListNode*,bool> m;
        ListNode *A=headA,*B=headB;
        while(A!=NULL)
        {
            m[A]=true;
            A=A->next;
        }
        
        while(B!=NULL)
        {
            if(m[B]) return B;
            B=B->next;
        }
        
        return NULL;
    }
};