class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i<j){
            int water = min(heights[i],heights[j])*(j-i);
            ans = max(ans,water);
            if(heights[i]>heights[j]) j--;
            else i++;
        }
        return ans;
    }
};
