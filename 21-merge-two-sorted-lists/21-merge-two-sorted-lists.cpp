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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *A=list1,*B=list2;
        
        if(A==NULL) return B;
        if(B==NULL) return A;
        
        ListNode* ans,*curr;
        if(A->val<=B->val)
        {
            ans=A;
            A=A->next;
            curr=ans;
        }
        else
        {
            ans=B;
            B=B->next;
            curr=ans;
        }
        
        while(true)
        {
            if(A==NULL)
            {
                curr->next=B;
                return ans;
            }
            if(B==NULL)
            {
                curr->next=A;
                return ans;
            }
            
            if(A->val<=B->val)
            {
                curr->next=A;
                curr=curr->next;
                A=A->next;
            }
            else
            {
                curr->next=B;
                curr=curr->next;
                B=B->next;
            }
        }
        
        
    }
};