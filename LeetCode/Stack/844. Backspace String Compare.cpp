class Solution {
    public:
        stack<char> transform(string s) {
            stack<char> st;
            for (char c : s) {
                if (c == '#') {
                    if (!st.empty()) st.pop();
                } else {
                    st.push(c);
                }
            }
            return st;
        }
    
        bool backspaceCompare(string s, string t) {
            return transform(s) == transform(t);
        }
    };