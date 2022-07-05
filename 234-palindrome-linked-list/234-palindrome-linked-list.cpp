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
ListNode* middle(ListNode* head)
{
    ListNode* slow=head,*fast=head->next;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

ListNode* reverse(ListNode* temp)
{
    ListNode *prev=NULL,*curr=temp;
    while(curr)
    {
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* middleOfList=middle(head);
        ListNode* temp=middleOfList->next;
        middleOfList->next=reverse(temp);
        
        ListNode* start=head;
        while(middleOfList->next)
        {
            if(start->val!=middleOfList->next->val) return false;
            start=start->next;
            middleOfList=middleOfList->next;
        }
        return true;
    }  
};