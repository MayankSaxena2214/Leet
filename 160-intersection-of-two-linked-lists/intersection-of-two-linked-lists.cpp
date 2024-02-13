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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        map<ListNode*,bool>mp;
        ListNode*tempa=headA,*tempb=headB;
        while(tempa!=NULL){
            mp[tempa]=true;
            tempa=tempa->next;
        }
        while(tempb!=NULL){
            if(mp.find(tempb)!=mp.end()){
                return tempb;
            }
            tempb=tempb->next;
        }
        return NULL;
        
    }
};