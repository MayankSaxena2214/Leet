class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int length=nums.size();
        vector<int>ans;
        int missing=0,duplicate=0;
        vector<int> freq(length+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]==2){
                duplicate=i;
            }
            if(freq[i]==0){
                missing=i;
            }

        }
       
       
            ans.push_back(duplicate);
            ans.push_back(missing);
      
        return ans;
    }
};