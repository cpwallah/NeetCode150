class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++){
           m[nums[i]]=i;
       }
       vector<int>ans;
       for(int j=0;j<nums.size();j++){
           if(m.find(target-nums[j])!=m.end() && j!=m[target-nums[j]]){
               ans.push_back(j);
               ans.push_back(m[target-nums[j]]);
               
               break;
           }
       }
       return ans;     
    }
};
