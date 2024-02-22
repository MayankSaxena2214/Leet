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
    int deepestLeavesSum(TreeNode* root) {
        int count=0;
        if(root==NULL)return count;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*front=q.front();
                q.pop();
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);
            }
            count++;
        }
        int start=0;
        queue<TreeNode*>q2;
        q2.push(root);
        while(start<count-1){
            int n=q2.size();
            for(int i=0;i<n;i++){
                TreeNode*front=q2.front();
                q2.pop();
                if(front->left)q2.push(front->left);
                if(front->right)q2.push(front->right);
            }
            start++;
        }
        
        int sum=0;
        while(!q2.empty()){
            TreeNode*front=q2.front();
            q2.pop();
            sum+=front->val;
        }
        return sum;
        
    }
};