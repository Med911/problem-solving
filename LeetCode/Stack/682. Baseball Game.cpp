class Solution {
    public:
        int calPoints(vector<string>& ops) {
            stack<int> st;
            int ans = 0;
    
            for (int i = 0; i < ops.size(); ++i) {
                if (ops[i] == "C") {
                    if (!st.empty()) {
                        st.pop();
                    }
                } else if (ops[i] == "D") {
                    if (!st.empty()) {
                        st.push(st.top() * 2);
                    }
                } else if (ops[i] == "+") {
                    if (st.size() >= 2) {
                        int top1 = st.top();
                        st.pop();
                        int top2 = st.top();
                        st.push(top1);
                        st.push(top1 + top2);
                    }
                } else {
                    st.push(stoi(ops[i]));
                }
            }
            while (!st.empty()) {
                ans += st.top();
                st.pop();
            }
    
            return ans;
        }
    };