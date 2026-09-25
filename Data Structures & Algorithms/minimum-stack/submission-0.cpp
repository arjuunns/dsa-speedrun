class MinStack {
   private:
   stack<pair<int, int>> st;  // int,mini
   public:
    MinStack() {}
    void push(int val) {
        if (st.empty()) st.push({val, val});
        else {
            int mini = st.top().second;
            if (val < mini) st.push({val, val});
            else st.push({val, mini});
        }
    }

    void pop() {
        if (!st.empty()) st.pop();
    }

    int top() {
        if (!st.empty()) return st.top().first;
    }

    int getMin() {
        if (!st.empty()) return st.top().second;
    }
};
