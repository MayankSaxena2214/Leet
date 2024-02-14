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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int s=k-1;
        int e=ans.size()-k;
        swap(ans[s],ans[e]);
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=ans[i++];
            temp=temp->next;
        }
        return head;
    }
};