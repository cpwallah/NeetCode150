class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>l;
        vector<int>r;
        int maxi=INT_MIN;
        for(auto lo:height){
            maxi=max(maxi,lo);
            l.push_back(maxi);
        }
        int mini=INT_MIN;
        for(int j=height.size()-1;j>=0;j--){
            mini=max(mini,height[j]);
            r.push_back(mini);
        }
        reverse(r.begin(),r.end());
        int sumi=0;
        for(int k=0;k<l.size();k++){
            sumi+=(abs(min(l[k],r[k])-height[k]));
        }
        return sumi;
    }
};
