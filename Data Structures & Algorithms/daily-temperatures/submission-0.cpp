class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // [30,38,30,36,35,40,28]
        // stack => [40,28]
        // curr => 

        // output => [38,40,36,40,40,0,0] => nge (currid-st.top());
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(0);
        for(int i = 1;i<n;i++){
            int currTemp = temperatures[i];
            while(!st.empty() and currTemp > temperatures[st.top()]){
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
