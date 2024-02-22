class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string buffer;
        string ans;
        vector<string> temp;
        while(ss>>buffer){
            temp.push_back(buffer);
        }
        for(int i=temp.size()-1;i>=0;i--){
            if(i!=0){
                ans+=temp[i]+" ";
            }
            else{
                ans+=temp[i];
            }
        }
        return ans;
    }
};