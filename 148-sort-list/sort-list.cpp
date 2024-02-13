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
    void inserttail(ListNode*&anshead,ListNode*&anstail,int data){
        ListNode*temp=new ListNode(data);
        if(anshead==NULL){
            anshead=anstail=temp;
        }
        else{
            anstail->next=temp;
            anstail=temp;
        }
    }
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode*anshead=NULL,*anstail=NULL;
        for(auto i:ans){
            inserttail(anshead,anstail,i);
        }
        return anshead;
    }
};