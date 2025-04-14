class Solution {    
    public:
        int timeRequiredToBuy(vector<int>& v, int k) {
            int ans = 0;
            int n = v.size();
            for (int i=0 ; i<n ; i++) {
                if (i<k) {
                    ans += min(v[i], v[k]);
                } else if (i > k) {
                    ans += min(v[i], v[k]-1);
                }
            }
            queue<int> q;
            ans = 0;
            for (int i=0 ; i<n ; i++) {
                q.push(i);
            }
            while(v[k] > 0) {
                int f = q.front();
                q.pop();
                v[f]--;
                ans++;
                if (v[f])
                    q.push(f);
            }
            return ans;
        }
    };