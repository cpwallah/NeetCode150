class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int,vector<int>,greater<int>>pq;
      for(auto l:nums){
          pq.push(l);   
      }
      while(pq.size()!=k){
          pq.pop();
      }
      return pq.top();
    }
};
