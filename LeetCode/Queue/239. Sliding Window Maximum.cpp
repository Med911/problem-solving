#include <bits/stdc++.h>

using namespace std;
class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& v, int k) {
            multiset<int> s;
            int n = v.size();
            for (int i = 0; i < k; ++i) {
                s.insert(v[i]);
            }
            
            vector<int> ans;
            ans.push_back(*s.rbegin());
    
            for (int i = k; i < n; ++i) {
                s.erase(s.find(v[i - k]));
                
                s.insert(v[i]);
                
                ans.push_back(*s.rbegin());
            }
            
            return ans;
        }
    };