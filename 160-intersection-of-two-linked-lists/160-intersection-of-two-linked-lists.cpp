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
        
        ListNode *A=headA,*B=headB;
        while(A!=NULL && B!=NULL && A!=B)
        {
            A=A->next;
            B=B->next;
            
            if(A==B) return A;
            
            if(A==NULL) A=headB;
            if(B==NULL) B=headA;
        }
        return A;
    }
};