class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>st;
        for(auto x : nums) st.insert(x);
        vector<int>v;
        for(auto x : st) v.push_back(x);
        int ans = 1;
        int curr = 1;
        for(int i = 1;i<v.size();i++){
            if(v[i]==v[i-1]+1) curr++;
            else curr=1;
            ans = max(ans,curr);
        }
        return ans;
    }
};
