#include <bits/stdc++.h>

class Solution {
    public:
        bool isValid(string s) {
            string openB = "{[(";
            string closeB = "}])";
            stack<char> st;
            for(int i = 0; i < s.length(); i++) {
                if(find(openB.begin(), openB.end(), s[i]) != openB.end()) { // if s[i] in openB
                    st.push(s[i]);
                } else {
                    if(!st.empty() && (closeB.find(s[i]) == openB.find(st.top()))) {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
            return st.empty();
        }
    };