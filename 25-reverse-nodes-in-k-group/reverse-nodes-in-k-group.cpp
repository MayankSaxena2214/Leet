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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL ){
            return head;
        }
        ListNode*curr=head,*prev=NULL,*forw=NULL;
        int cnt=0;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
        }
        while(curr!=NULL && cnt<k){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
            cnt++;
        }
        if(forw!=NULL){
            head->next=reverseKGroup(forw,k);
        }
        return prev;

    }
};