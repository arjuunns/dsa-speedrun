class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // 0 1 2 3 4 5 6 7 8 9 10 11
        // l         m             h

        // r = 3
        // c = 4
        // 5 => [1,1]
        int r = matrix.size();
        int c = matrix[0].size();
        int low = 0;
        int high = r*c-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int r1 = mid/c;
            int c1 = mid%c;
            int val = matrix[r1][c1];
            if(val==target) return true;
            else if(val>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};
