class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
    int maxi=INT_MIN;
        while(i<j){
            maxi=max(min(nums[i],nums[j])*(j-i),maxi);
           
                if(nums[i]>=nums[j]){
                    j--;
                }
                else{
                    i++;
                }
        }
        return maxi;
    }
};
