class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i=0;
        while(i<nums.size() && nums[i]!=1)i++;
        int n=nums.size();
        if(i==nums.size()-1)return true;
        int j=i+1;
        while(j<n){
            if(nums[j]==1){
                if(j-i-1<k){
                    return false;
                }
                i=j;
                j=i+1;
            }
            j++;
        }
        return true;
    }
};