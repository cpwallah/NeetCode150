class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        if(nums[i]==target){
            return i;
        }
        if(nums[j]==target){
            return j;
        }
        while(i<=j){
            int mid=i+(j-i)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
};
