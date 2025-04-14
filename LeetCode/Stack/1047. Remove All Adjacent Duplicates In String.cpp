class Solution {
    public:
        string removeDuplicates(string s) {
                stack<char> st;
                    int i =0;
                while(!s.empty() && i<=s.size()){
                    if(st.empty()) {
                        st.push(s[i]);
                        i++;
                    }
                    else if(st.top()!= s[i]){
                        st.push(s[i]);
                        i++;
                    }
                    else {
                            st.pop();
                            s.erase(i-1,2);
                            i--;
                        }
                }
            return s;
            }         
    };