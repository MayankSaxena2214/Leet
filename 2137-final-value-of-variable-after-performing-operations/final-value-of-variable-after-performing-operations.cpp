class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto str:operations){
            if(str=="--X"){
                x=x-1;
            }
            else if(str=="X--"){
                x=x-1;
            }
            else if(str=="X++"){
                x=x+1;
            }
            else if(str=="++X"){
                x=x+1;
            }
        }
        return x;
    }
};