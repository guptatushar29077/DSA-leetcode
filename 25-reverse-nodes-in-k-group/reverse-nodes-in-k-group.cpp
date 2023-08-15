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
ListNode * reverse(ListNode* head,int k,int len)
{
    if(head==NULL || k==0 || head->next==NULL || len<k)
        {
            return  head;
        }
        ListNode* pre=NULL;
        ListNode* curr=head;
        ListNode* nxt=NULL;
        int cnt=0;
        while(curr!=NULL && cnt<k)
        {
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
            cnt++;
        }
        if(curr!=NULL)
        {
            head->next=reverse(curr,k,len-k);
        }
        return pre;
}
    int find(ListNode* head)
    {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int len=find(head);
        return reverse(head,k,len);
        
    }
};