#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& s) {
        queue<int> q(st.begin(), st.end());
        queue<int> ss(s.begin(), s.end()); 
        int stayed = 0;
        while (!q.empty() && q.size() > stayed) {
            if (q.front() == ss.front()) {
                q.pop();
                ss.pop();
                stayed = 0;
            } else {
                stayed++;
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};
