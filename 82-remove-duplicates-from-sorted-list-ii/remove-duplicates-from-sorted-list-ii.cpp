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
    void insertTail(ListNode*&anshead,ListNode*&anstail,int data){
        ListNode*temp=new ListNode(data);
        if(anshead==NULL){
            anshead=anstail=temp;
            return ;
        }
        else{
            anstail->next=temp;
            anstail=temp;
            return;
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        vector<int> ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        for(auto i:ans){
            mp[i]++;
        }
        ListNode*anshead=NULL,*anstail=NULL;
        for(auto i:mp){
            if(i.second==1){
                insertTail(anshead,anstail,i.first);
            }
        }
        return anshead;
    }
};