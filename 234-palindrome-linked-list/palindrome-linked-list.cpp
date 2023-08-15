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
ListNode* reverse(ListNode* head)
{   
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* nxt=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;

}
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return 1;
        }

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;

        while(slow!=NULL)
        {
            if(slow->val!=head->val)
            {
                return 0;
            }
            slow=slow->next;
            head=head->next;

        }
        return 1;
    }
};