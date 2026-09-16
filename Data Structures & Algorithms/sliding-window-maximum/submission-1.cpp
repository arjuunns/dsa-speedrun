class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        int i = 0;
        int j = 0;
        while(k--) {
            mp[nums[j]]++;
            j++;
        }
        if(!mp.empty()) ans.push_back(prev(mp.end())->first);
        while(j<nums.size()){
            mp[nums[i]]--;
            if(!mp[nums[i]]) mp.erase(nums[i]);
            i++;
            mp[nums[j]]++;
            j++;
            if(!mp.empty()) ans.push_back(prev(mp.end())->first);
        }
        return ans;
    }
};
