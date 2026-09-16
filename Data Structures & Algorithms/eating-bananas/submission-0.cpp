class Solution {
public:
    long long f(int k, const vector<int>& piles) {
        long long t = 0;
        for (int x : piles) t += ceil(x*1.0/k);;
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long timeToFinish = f(mid,piles);
            if(timeToFinish > h) low = mid+1;
            else {
                ans = mid;
                high = mid-1;
            }
        }
        // N N N N N N Y Y Y Y Y 
        return ans;
    }
};
