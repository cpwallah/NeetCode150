class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int a=-nums[i];
            int l=i+1;
            int h=nums.size()-1;
            while(l<h){
                if(nums[l]+nums[h]==a){
                    s.insert({nums[i],nums[l],nums[h]});
                    l++;
                    h--;
                }
                else if(nums[l]+nums[h]>a){
                    h--;
                }
                else{
                    l++;
                }
            }

        }
        vector<vector<int>>maow;
        for(auto l:s){
            maow.push_back(l);
        }
        return maow;
    }
};
