class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        if(s.size()==1){
            return 1;
        }
        deque<char>dq;
        int maxi=INT_MIN;
        for(auto l:s){
            while(find(dq.begin(),dq.end(),l)!=dq.end()){
                dq.pop_front();
            }
            dq.push_back(l);
            int no=dq.size();
            maxi=max(maxi,no);
        }
        return maxi;
    }
};
