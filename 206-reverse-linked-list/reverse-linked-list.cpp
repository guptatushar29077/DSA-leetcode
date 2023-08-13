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
    ListNode* reverseList(ListNode* head) {
        ListNode * temp=new ListNode();
        temp=NULL;
        ListNode * curr=head;
        ListNode* nex;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=temp;
            temp=curr;
            curr=nex;
        }
        return temp;
        
    }
};