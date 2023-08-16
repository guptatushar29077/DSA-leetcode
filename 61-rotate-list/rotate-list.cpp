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
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL)
        {
            return head;
        }
        int cnt=1;
        ListNode * temp=head;
        while(temp->next!=NULL )
        {
            temp=temp->next;
            cnt++;
        }
        temp->next=head;
        k=k%cnt;
        k=cnt-k;
        while(k--)
        {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        
        
    }
};