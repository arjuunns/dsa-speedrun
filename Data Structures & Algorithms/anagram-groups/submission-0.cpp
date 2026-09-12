class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto str : strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto it : mp){
            vector<string>v = it.second;
            ans.push_back(v);
        }
        return ans;
    }
};
