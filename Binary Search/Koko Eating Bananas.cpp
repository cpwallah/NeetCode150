class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int l=1;
        int r=1e9+7;
        while(l<r){
            int mid=l+(r-l)/2;
            int total=0;
            for(auto hi:nums){
                total+=(ceil((hi*1.0)/mid));
            }
            if(total>h){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return l;
    }
};
