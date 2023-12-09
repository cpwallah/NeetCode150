class Solution {
public:
    vector<vector<int>>ans;
   void maow(vector<int>input,vector<int>output,int index){
      if(index>=input.size()){
          ans.push_back(output);
          return;
      }
      output.push_back(input[index]);
      maow(input,output,index+1);
      output.pop_back();
        maow(input,output,index+1);

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        maow(nums,output,0);
        return ans;
    }
};
