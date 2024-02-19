class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int area=0;
        int e=height.size()-1;
        while(s<e){
            int fh=height[s];
            int lh=height[e];
            int b=e-s;
            int l=min(fh,lh);
            area=max(area,l*b);
            if(fh>lh){
                e--;
            }
            else{
                s++;
            }
        }
        return area;
    }
};