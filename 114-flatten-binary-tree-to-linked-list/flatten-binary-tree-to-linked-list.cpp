/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode*curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode*pred=curr->left;
                while(pred->right!=NULL){
                    pred=pred->right;
                }
                pred->right=curr->right;
                curr->right=curr->left;
                
                curr->left=NULL;
            }
            curr=curr->right;
        }
        
    }
};