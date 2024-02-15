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
    vector<int> nextLargerNodes(ListNode* head) {
        
        
        stack<int> st;
        ListNode*temp=head;
        st.push(INT_MAX);
        vector<int> nums;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> ans(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(st.top()<=nums[i]){
                st.pop();
            }
            if(st.top()==INT_MAX){
                ans[i]=0;
            }
            else{
                ans[i]=st.top();
            }
            st.push(nums[i]);
        }
        return ans;
    }
};