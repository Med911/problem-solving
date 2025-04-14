class Solution {
    public:
        int minKBitFlips(vector<int>& v, int k) {
            queue<int> limits;
            int ans = 0;
            int n = v.size();
    
    for (int i = 0; i < n; i++) {
        while (!limits.empty() && limits.front() < i) {
            limits.pop();
        }
    
        int flips = limits.size();
        if ((v[i] && (flips % 2 == 1)) || (!v[i] && (flips % 2 == 0))){
            if (i + k > n) return -1;
            ans++;
            limits.push(i + k - 1);
        }
    }
    return ans;
    
    }
    };