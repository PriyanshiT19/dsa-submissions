class Solution {
public:
    int trap(vector<int>& height) {
        //int l=0;
        //int r=height.size()-1;
        int c=0;
        vector<int> lprefix(height.size());
        vector<int> rprefix;
        rprefix.resize(height.size());
        lprefix[0] = height[0];
        rprefix[height.size()-1] = height[height.size()-1];
        for(int i=1; i<height.size();i++){
            lprefix[i] = max(lprefix[i-1],height[i]);
        }
        for(int i=height.size()-2; i>=0; i--){
            rprefix[i] = max(rprefix[i+1], height[i]);
        }
        for(int i=0; i<height.size(); i++){
            c+= min(lprefix[i], rprefix[i]) - height[i];
        }
        return c;
    }
};
