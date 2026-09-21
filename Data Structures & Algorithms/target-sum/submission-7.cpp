class Solution {
   public:
    int f(vector<int>& nums, int tgt, vector<vector<int>>& dp, int i) {
        if (i < 0 or tgt < 0) return 0;
        if (i == 0) {
            if (tgt == 0 && nums[0] == 0) return 2;
            if (tgt == 0 || tgt == nums[0]) return 1;
            return 0;
        }
        if (dp[i][tgt] != -1) return dp[i][tgt];
        int take = f(nums, tgt - nums[i], dp, i - 1);
        int not_take = f(nums, tgt, dp, i - 1);
        return dp[i][tgt] = take + not_take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int tot = accumulate(nums.begin(), nums.end(), 0);
        int diff = tot + target;
        int newTarget;
        if (tot < abs(target) || (tot - target) % 2 != 0)
            return 0;
        else
            newTarget = diff / 2;
        vector<vector<int>> dp(n, vector<int>(newTarget + 1, -1));
        return f(nums, newTarget, dp, n - 1);
    }
};
