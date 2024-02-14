class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans=1;
        if(ans==n){
            return true;
        }
        for(int i=0;i<30;i++){
            if(ans<INT_MAX/3)
            ans=ans*3;
            else
            return false;
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};