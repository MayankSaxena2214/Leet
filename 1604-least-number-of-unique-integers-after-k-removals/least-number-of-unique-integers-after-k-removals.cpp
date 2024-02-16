class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:mp){
            pq.push(i.second);
        }
        while(!pq.empty()&& pq.top()<=k && k>0){
            if(pq.top()<=k){
                k=k-pq.top();
                pq.pop();
                }
        }
        return pq.size();
    }
};
