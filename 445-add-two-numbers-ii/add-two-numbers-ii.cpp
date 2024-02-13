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
    ListNode*reverse(ListNode*head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*prev=NULL,*curr=head,*forw=NULL;
        while(curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    void insertTail(ListNode*&anshead,ListNode*&anstail,int data){
        ListNode*temp=new ListNode(data);
        if(anshead==NULL){
            anshead=anstail=temp;
            return;
        }
        else{
            anstail->next=temp;
            anstail=temp;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*first=reverse(l1);
        ListNode*second=reverse(l2);
        int carry=0;
        ListNode*anshead=NULL,*anstail=NULL;
        while(first!=NULL && second!=NULL){
            int sum=carry+first->val + second->val;
            carry=sum/10;
            sum=sum%10;
            insertTail(anshead,anstail,sum);
            first=first->next;
            second=second->next;
        }
        while(first!=NULL){
            int sum=carry+first->val;
            carry=sum/10;
            sum=sum%10;
            insertTail(anshead,anstail,sum);
            first=first->next;
        }
        while(second!=NULL){
            int sum=carry+second->val;
            carry=sum/10;
            sum=sum%10;
            insertTail(anshead,anstail,sum);
            second=second->next;
        }
        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            insertTail(anshead,anstail,sum);
        }
        return reverse(anshead);
    }
};