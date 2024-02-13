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
 /*
BRUTE FORCE LOGIC

1.First we will traverse the list 
 2. While traversing ,stores all the data that are less than the x into larr(vector to store the small elements) and all the elements thjat ar greater are stored in the garr(vector to store the greater element)
3. tHEN AGAIN TRAVERSE THE LIST AND UPDATE THE DATA OF LIST WITH THE LARR FIRST AND THEN GARR VECTOR */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
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