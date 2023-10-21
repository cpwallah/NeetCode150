class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto l:nums){
            m[l]+=1;
        }
        vector<pair<int,int>>v;
        for(auto lo:m){
            v.push_back({lo.second,lo.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>ans;
        for(auto hi:v){
            if(k==0){
                break;
            }
            k-=1;
            ans.push_back(hi.second);
        }
        return ans;

    }
};
