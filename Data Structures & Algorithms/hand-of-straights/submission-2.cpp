class Solution {
   public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;
        map<int, int> mp;
        for (auto x : hand) mp[x]++;
        while (!mp.empty()) {
            int firstKey = mp.begin()->first;
            for (int i = 0; i < groupSize; i++) {
                int currentKey = firstKey + i;
                if (!mp.count(currentKey)) return false;
                mp[currentKey]--;
                if (!mp[currentKey]) mp.erase(currentKey);
            }
        }
        return true;
    }
};