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
    int getlength(ListNode*head){
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=getlength(head);
        int index=length-n;
        vector<int> ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        ListNode*prev=NULL;
        int i=0;
        while(temp->next!=NULL){
            if(i!=index){
                temp->val=ans[i++];
                prev=temp;
                temp=temp->next;
            }
            else{
                i++;
            }
            
        }
        if(prev==NULL){
            return NULL;
        }
        prev->next=NULL;
        return head;
        // int k=length-n;
        // if(k==0){
        //     head=head->next;
        //     return head;
        // }
        // if(k<0){
        //     return head;
        // }
        // if(k==1){
        //     ListNode*temp=head;
        //     head=head->next;
        //     delete temp;
        //     return head;
        // }
        // ListNode*temp=head;
        // int count=1;
        // while(count<k){
        //     count++;
        //     temp=temp->next;
        // }
        
        // ListNode*todel=temp->next;
        // if(todel->next==NULL){
        //     temp->next=NULL;
        // }
        // else{
        //     temp->next=todel->next;
        // }
        // delete todel;
        // return head;
    }
};