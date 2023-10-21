class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if((numbers[i]+numbers[j])==target){
                break;
            }
            else if((numbers[i]+numbers[j])>target){
                j--;
            }
            else{
                i++;
            }
        }
        vector<int>ans;
        ans.push_back(i+1);
        ans.push_back(j+1);
       return ans;
    }
};
