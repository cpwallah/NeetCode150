class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int>m;
       for(auto l:nums){
           m[l]+=1;
       } 
       for(auto hi:m){
           if(hi.second>=2){
               return true;
           }
       }
       return false;
    }
};
