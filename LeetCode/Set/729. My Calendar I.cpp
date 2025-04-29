class MyCalendar {
    public:
        set<pair<int,int>> bk;
        MyCalendar() {
        }
        
        bool book(int st, int et) {
            auto it = bk.lower_bound({st,et});
    
            if(it!=bk.end()){
                if((it->first<et)) return false;
            }
    
            if(it!=bk.begin()) {
                it--;
            if((it->second)>st) return false;
            }
        
            bk.insert({st,et});
        return true;
        }
    };
    