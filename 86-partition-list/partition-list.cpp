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
    ListNode* partition(ListNode* head, int x) {
        vector<int> ans;
        ListNode*temp=head;
        vector<int> larr;
        vector<int> garr;
        while(temp!=NULL){
            if(temp->val<x){
                larr.push_back(temp->val);
            }
            else{
                garr.push_back(temp->val);
            }
            // ans.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,k=0;
        int lcnt=larr.size();
        int gcnt=garr.size();
        temp=head;
        while(i<lcnt){
            temp->val=larr[i++];
            temp=temp->next;
        }
        while(k<gcnt){
            temp->val=garr[k++];
            temp=temp->next;
        }
        return head;
        
    }
};