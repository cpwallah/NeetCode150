class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pref(nums.size(),1);
        int tapin=1;
        for(int i=0;i<nums.size()-1;i++){
            pref[i+1]=tapin*nums[i];
            tapin*=nums[i];
        }
        vector<int>suff(nums.size(),1);
        tapin=1;
        for(int k=nums.size()-1;k>=1;k--){
            suff[k-1]=tapin*nums[k];
            tapin*=nums[k];
        }
        for(int x=0;x<nums.size();x++){
            pref[x]*=suff[x];
        }
        return pref;


    }
};
