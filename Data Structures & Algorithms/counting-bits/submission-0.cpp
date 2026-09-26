class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int i = 0;
        while(i<=n){
            int num = i;
            int set_bits = 0;
            while(num){
                set_bits += num&1;
                num = num>>1;
            }
            ans.push_back(set_bits);
            i++;
        }
        return ans;
    }
};
