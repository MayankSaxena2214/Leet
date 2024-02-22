class Solution {
public:
    
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return 1;
        }
        unordered_set<int> st;
        unordered_map<int,int> mp;
        for(auto i:trust){
            st.insert(i[0]);
            mp[i[1]]++;
        }
        for(auto i:mp){
            
            
            if(st.find(i.first)==st.end()&& mp[i.first]==n-1){
                return i.first;
            }
        }
        return -1;
        
    }
};