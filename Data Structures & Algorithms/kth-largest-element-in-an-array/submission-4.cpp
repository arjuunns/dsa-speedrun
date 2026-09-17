class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x : nums) {
            pq.push(x);
            if(pq.size()>k)pq.pop();
        }
        // nums = [3,2,1,5,6,4]
        // k = 2
        // pq => 5 3
        return pq.top();
    }
};
