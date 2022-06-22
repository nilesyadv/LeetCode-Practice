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
        ListNode* temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
            if(cnt>=maxi) return true;
        }
        
        return false;
    }
};