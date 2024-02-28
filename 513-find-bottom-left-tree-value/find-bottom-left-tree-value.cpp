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
#include<queue>
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL){
            return -1;
        }
        if(root->left==NULL && root->right==NULL){
            return root->val;
        }
       map<int,TreeNode*>mp;
        queue<pair<int,TreeNode*>> q;
        q.push({0,root});
        while(!q.empty()){
            pair<int,TreeNode*> ans=q.front();
            q.pop();
            if(mp.find(ans.first)==mp.end()){
                mp[ans.first]=ans.second;
            }
            if(ans.second->left){
                q.push({ans.first+1,ans.second->left});
            }
            if(ans.second->right){
                q.push({ans.first+1,ans.second->right});
            }
            
        }
        int n=mp.size();
        return mp[n-1]->val;
    }
};