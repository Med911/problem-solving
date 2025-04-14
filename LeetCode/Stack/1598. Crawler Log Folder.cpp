class Solution {
    public:
        int minOperations(vector<string>& l) {
            stack<string> s;
            int i =0;
            while(i<l.size()){
                if(l[i]=="../"){
                    if(!s.empty()){
                        s.pop();
                        
                    }
                }           
                else if(l[i]!="./" && l[i]!="../"){
                    s.push(l[i]);
                }
                i++;
            }
            return s.size();
        }
    };