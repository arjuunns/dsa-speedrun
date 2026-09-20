class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totcost = accumulate(cost.begin(),cost.end(),0);
        int totgas = accumulate(gas.begin(),gas.end(),0);
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
