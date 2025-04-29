class StockPrice {
    public:
        map<int, int> m;
        multiset<int> count;
    
        void update(int t, int p) {
            if (m.find(t) != m.end())
                count.erase(count.find(m[t]));
            m[t] = p;
            count.insert(p);
        }
    
        int current() {
            return m.rbegin()->second;
        }
    
        int maximum() {
            return *count.rbegin();
        }
    
        int minimum() {
            return *count.begin();
        }
    };