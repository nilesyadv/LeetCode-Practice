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
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL) return NULL;
        ListNode *slow = head, *fast = head -> next;
        while(true)
        {
            if(fast -> next == NULL || fast -> next -> next == NULL){
                slow -> next = slow -> next -> next;
                break;
            }
            slow = slow -> next;
            fast = fast -> next -> next;       
        }
        return head;
    }
};