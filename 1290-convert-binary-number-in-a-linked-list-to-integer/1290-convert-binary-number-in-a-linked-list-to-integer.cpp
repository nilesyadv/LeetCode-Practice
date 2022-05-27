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
    int getDecimalValue(ListNode* head) {
        
        int result=head->val;
        ListNode *temp=head->next;
        while(temp!=NULL)
        {
            result=result*2+temp->val;
            temp=temp->next;
        }
        return result;
    }
};