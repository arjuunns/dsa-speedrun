class Solution {
public:
    int accumulate(vector<int>&a){
        int sum = 0;
        for(auto x : a) sum += x;
        return sum;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totcost = accumulate(cost);
        int totgas = accumulate(gas);
        if(totcost>totgas) return -1;
        int i = 0;
        int idx = 0;
        int gasleft = 0;
        while(i<n){
            gasleft = gasleft + gas[i] - cost[i];
            if(gasleft<0) {
                idx = i+1;
                gasleft = 0;
            }
            i++;
        }
        return idx;
    }
};
