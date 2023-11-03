class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& s) {
        deque<pair<int,int>>dq;
        // deque<pair<int,int>>dq1;
        vector<int>v(s.size(),0);
        for(int i=0;i<s.size();i++){
            if(dq.empty()){
                dq.push_back({s[i],i});
            }
            else if(s[i]<dq.back().first){
                 dq.push_back({s[i],i});
            }
            else{
                while(!dq.empty() && s[i]>dq.back().first){
                    v[dq.back().second]=i-dq.back().second;
                    dq.pop_back();
                }
                dq.push_back({s[i],i});
            }
        }
        return v;
    }
};
