class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                digits[i]++;
            }
            if(digits[i]==10){
                digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
        // vector<int> s={1};
        // vector<int> ans;
        // int carry=0;
        // int i=digits.size()-1;
        // int j=s.size()-1;
        // while(i>=0 && j>=0){
        //     int sum=digits[i]+s[j]+carry;
        //     carry=sum/10;
        //     sum=sum%10;
        //     ans.push_back(sum);
        //     i--;
        //     j--;
        // }
        // while(i>=0){
        //     int sum=digits[i]+carry;
        //     carry=sum/10;
        //     sum=sum%10;
        //     ans.push_back(sum);
        //     i--;
        // }
        
        // while(carry!=0){
        //     int sum=carry;
        //     carry=sum/10;
        //     sum=sum%10;
        //     ans.push_back(sum);
            
        // }
        //  int st=0;
        // int e=ans.size()-1;
        // while(st<e){
        //     swap(ans[st++],ans[e--]);
        // }
        // return ans;
    }
};