class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
       map<int,int>m;
       vector<int>v;
       for(auto l:nums){
           m[l]+=1;
       }   
       for(auto hi:m){
           v.push_back(hi.first);
       }
       int curr=1;
       int maxi=1;
       for(int j=1;j<v.size();j++){
           if((v[j]-v[j-1])==1){
               curr+=1;
               maxi=max(maxi,curr);
           }
           else{
               curr=1;
           }
       }
       return maxi;
    }
};
