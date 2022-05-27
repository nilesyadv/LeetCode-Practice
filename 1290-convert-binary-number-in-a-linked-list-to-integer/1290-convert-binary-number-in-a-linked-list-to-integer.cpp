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
        int length=0;
        int result=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        length--;
        temp=head;
        while(temp!=NULL)
        {
            int pow=1,l=length;
            if(temp->val==1)
            {
              while(l--)
              {
                pow=pow*2;
              }
            }
            else pow=0;
            result+=pow;
            length--;
            temp=temp->next;
        }
        
        return result;
    }
};