class Solution {
    public:
        vector<int> nextLargerNodes(ListNode* head) {
            vector<int> values;
            ListNode* curr = head;
            while (curr != nullptr) {
                values.push_back(curr->val);
                curr = curr->next;
            }
            int n = values.size();
            vector<int> result(n, 0);
            stack<int> st;
            for (int i = 0; i < n; ++i) {
                while (!st.empty() && values[i] > values[st.top()]) {
                    int idx = st.top();
                    st.pop();
                    result[idx] = values[i];
                }
                st.push(i);
            }
            return result;
        }
    };