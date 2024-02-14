class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans=1;
        if(ans==n){
            return true;
        }
        for(int i=0;i<30;i++){
            if(ans<INT_MAX/4)
            ans=ans*4;
            else
            return false;
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};