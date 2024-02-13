class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                temp.push_back(ch);
            }
        }
        if(temp.length()==0){
            return true;
        }
        // To lower case
        for(int i=0;i<temp.length();i++){
            char ch=temp[i];
            if((ch>='a' && ch<='z')  || (ch>='0' && ch<='9')){
                temp[i]=temp[i];
            }
            else{
                temp[i]=ch-'A'+'a';
            }
        }
        int start=0;
        int end=temp.length()-1;
        while(start<end){
            if(temp[start]!=temp[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};