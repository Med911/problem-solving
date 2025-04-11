class Solution {
    public:
        string predictPartyVictory(string s) {
            int r = 0, d = 0, totR = 0, totD = 0;
            queue<char> q;
            for (char &c:s) {
                q.push(c);
                totR += c == 'R';
                totD += c == 'D';
            }
    
            while(totR && totD) {
                if (q.front() == 'D') { 
                    if (d) {
                        q.pop();
                        d--;
                        totD--;
                    } else {
                        q.push(q.front());
                        q.pop();
                        r++; 
                    }
                } else {
                    if (r) {
                        q.pop();
                        r--;
                        totR--;    
                    } else {
                        q.push(q.front());
                        q.pop();
                        d++;
                    }
                }
            }  
            return totR ? "Radiant" : "Dire";
        }
    };