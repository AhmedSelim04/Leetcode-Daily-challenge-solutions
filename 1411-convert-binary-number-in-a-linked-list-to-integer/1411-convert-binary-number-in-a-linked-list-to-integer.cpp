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
        int sz=0;
        ListNode*cur=head;
        while(cur){
            sz++;
            cur=cur->next;
        }
        int ans=0;
        cur=head;
        for(int i=sz-1;i>=0;i--){
            if(cur->val){
                ans+=(1<<i);
            }
            cur=cur->next;
        }
        return ans;
        
    }
};