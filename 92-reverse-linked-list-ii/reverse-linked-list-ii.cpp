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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int s=left-1;
        int e=right-1;
        while(s<e){
            swap(ans[s++],ans[e--]);
        }
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=ans[i++];
            temp=temp->next;
        }
        return head;}
};