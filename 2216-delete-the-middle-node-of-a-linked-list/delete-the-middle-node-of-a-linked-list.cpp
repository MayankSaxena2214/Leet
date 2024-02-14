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
 pair<ListNode*,ListNode*> middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return {head,NULL};
        }
        ListNode*slow=head;
        ListNode*prev=NULL;
        ListNode*fast=head->next;
        while(fast!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
        }
        return {slow,prev};
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        pair<ListNode*,ListNode*> ans=middleNode(head);
        ListNode*middle=ans.first;
        ListNode*prev=ans.second;
        prev->next=middle->next;
        delete middle;
        return head;
    }
};