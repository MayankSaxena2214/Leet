/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*forw=node->next;
        if(forw->next==NULL){
            node->val=forw->val;
            node->next=NULL;
            delete forw;
            return;
        }
        node->val=forw->val;
        node->next=forw->next;
        delete forw;
        

    }
};