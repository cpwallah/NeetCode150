class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto l:prices){
            mini=min(l,mini);
            maxi=max(maxi,l-mini);
        }
        return maxi;
    }
};
