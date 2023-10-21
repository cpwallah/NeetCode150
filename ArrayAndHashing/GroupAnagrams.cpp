class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(auto l:strs){
            string hi=l;
            sort(hi.begin(),hi.end());
            m[hi].push_back(l);
        }
        for(auto cats:m){
            ans.push_back(cats.second);
        }
        return ans;
    }
};
