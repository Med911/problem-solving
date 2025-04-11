class Solution {
    public:
        int clumsy(int n) {
            int op = 0;
            stack<int> st;
            st.push(n--);
    
            for (int i = n; i > 0; i--) {
                if (op == 0) {
                    st.top() *= i;
                } else if (op == 1) {
                    st.top() /= i;
                } else {
                    st.push(op == 2 ? i : -i);
                }
                op = (op + 1) % 4;
            }
    
            int ans = 0;
            while (!st.empty()) {
                ans += st.top();
                st.pop();
            }
            return ans;
        }
    };