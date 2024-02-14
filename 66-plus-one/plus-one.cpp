class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> s={1};
        vector<int> ans;
        int carry=0;
        int i=digits.size()-1;
        int j=s.size()-1;
        while(i>=0 && j>=0){
            int sum=digits[i]+s[j]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
            j--;
        }
        while(i>=0){
            int sum=digits[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
        }
        
        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            
        }
         int st=0;
        int e=ans.size()-1;
        while(st<e){
            swap(ans[st++],ans[e--]);
        }
        return ans;
    }
};