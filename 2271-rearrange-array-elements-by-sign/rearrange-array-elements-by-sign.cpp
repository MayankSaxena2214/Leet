class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos,neg;
        for(auto i:nums){
            if(i>0){
                pos.push_back(i);
            }
            else{
                neg.push_back(i);
            }
        }
        // int i=0,j=0;
        // while(i<pos.size() && j<neg.size()){
        //     ans.push_back(pos[i++]);
        //     ans.push_back(neg[j++]);
        // }
        // while(i<pos.size()){
        //     ans.push_back(pos[i++]);
        // }
        // while(j<neg.size()){
        //     ans.push_back(neg[j++]);
        // }
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
               nums[i]=pos[j++];
            }
            else{
                nums[i]=neg[k++];
            }
        }
        return nums;
    }
};