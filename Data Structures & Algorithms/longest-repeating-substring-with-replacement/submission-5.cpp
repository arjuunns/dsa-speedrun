class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int maxf = 0;
        int i = 0;
        int j = 0;
        int n = s.length();
        int ans = 0;
        while(j<n){
            mp[s[j]]++;
            maxf=max(maxf,mp[s[j]]);
            if((j-i+1) - maxf > k){
                mp[s[i]]--;
                maxf=max(maxf,mp[s[i]]);
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
