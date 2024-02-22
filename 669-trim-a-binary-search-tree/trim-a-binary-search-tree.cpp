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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL)return NULL;
        TreeNode*leftans=trimBST(root->left,low,high);
        if(root->left!=leftans){
            root->left=leftans;
        }
        TreeNode*rightans=trimBST(root->right,low,high);
        if(root->right!=rightans){
            root->right=rightans;
        }
        if(root->val>high || root->val<low){
            return root->left?root->left:root->right;
        }
        return root;
    }
};