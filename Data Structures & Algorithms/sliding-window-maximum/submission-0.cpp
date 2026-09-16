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
        while(j<nums.size()){
            if(!mp.empty()) ans.push_back(prev(mp.end())->first);
            mp[nums[i]]--;
            if(!mp[nums[i]]) mp.erase(nums[i]);
            i++;
            mp[nums[j]]++;
            j++;
        }
        ans.push_back(prev(mp.end())->first);
        return ans;
    }
};
