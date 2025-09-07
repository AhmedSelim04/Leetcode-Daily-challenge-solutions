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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*cur=head;
        int cnt=0;
        while(cur!=NULL)
        {
            cur=cur->next;
            cnt++;
        }
        n=cnt-n;
        if(n==0)
        {
            head=head->next;
            return head;
        }
        else if(n==cnt-1)
        {
            ListNode*prev=head;
            while(prev->next->next!=NULL)prev=prev->next;
            prev->next=NULL;
        }
        else {
        cur=head;
        ListNode*prev;
        while(n--)
        {
            if(n==0)
            prev=cur;
            
            cur=cur->next;
        }
        prev->next=cur->next;
        return head;
    }
    return head;
    }
};