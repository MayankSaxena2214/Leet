class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        // vector<int> ans;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int y=nums[x];
            nums[i]=x+(y%n)*n;
        }
        for(auto i:nums){
            ans.push_back(i/n);
        }
        return ans;
    }
};