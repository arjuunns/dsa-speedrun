class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        unordered_map<char,int>mp;
        for(auto ch : t) mp[ch]++;
        int i = 0;
        int j = 0;
        int cnt = mp.size();
        int mini = -1;
        int minWindow = INT_MAX;
        while(j<m){
            char ch = s[j];
            if(mp.find(ch)!=mp.end()){
                mp[ch]--;
                if(mp[ch]==0) cnt--;
            }
            while(cnt==0){
                if(minWindow > j-i+1){
                    minWindow = j-i+1;
                    mini = i;
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]>0) cnt++;
                }
                i++;
            }
            j++;
        }
        cout<<minWindow<<endl;
        return minWindow == INT_MAX ? "" : s.substr(mini,minWindow);
    }
};
