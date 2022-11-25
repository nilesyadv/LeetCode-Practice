class Solution {
public:
    int findTheWinner(int n, int k) {
        if(k == 1) return n;
        // formation of circular list
        ListNode *head = NULL, *tail = NULL;
        for(int i = 1; i <= n; i++)
        {
            ListNode *temp = new ListNode(i);
            if(head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail -> next = temp;
                tail = temp;
            }
            tail -> next = head;
        }
        
        ListNode *temp = head;
        while(head -> next != head)
        {
            ListNode *pre = NULL;
            for(int i = 1; i < k; i++)
            {
                pre = temp;
                temp = temp -> next;
            }
            if(temp == head)
                head = head -> next;
               
                pre -> next = temp -> next;
                delete (temp);
                temp = pre -> next;
        }
        return head -> val;
    }
};