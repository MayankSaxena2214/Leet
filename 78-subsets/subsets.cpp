class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int> output,int index,vector<int>&nums){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        solve(ans,output,index+1,nums);
        output.push_back(nums[index]);
        solve(ans,output,index+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(ans,output,index,nums);
        return ans;
    }
};