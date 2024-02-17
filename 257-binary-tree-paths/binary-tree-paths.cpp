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
    void solve(TreeNode*root,vector<string> &ans,string output){
        if(root->left==NULL && root->right==NULL){
            output+=to_string(root->val);
            ans.push_back(output);
            output.pop_back();
            return;
        }
        output+=to_string(root->val);
        output+="->";
        if(root->left)solve(root->left,ans,output);
        if(root->right)solve(root->right,ans,output);
        output.pop_back();
        output.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL){
            return ans;
        }
        string output;
        solve(root,ans,output);
        return ans;
    }
};