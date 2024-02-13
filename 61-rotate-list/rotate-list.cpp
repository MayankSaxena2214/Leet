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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> ans1(ans.size());
        for(int i=0;i<ans.size();i++){
            ans1[(i+k)%ans.size()]=ans[i];
        }
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=ans1[i++];
            temp=temp->next;
        }
        return head;
    }
};