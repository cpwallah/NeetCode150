class KthLargest {
public:
  priority_queue<int,vector<int>,greater<int>>pq;
  int hi;
    KthLargest(int k, vector<int>& nums) {
       hi=k;
        for(auto l:nums){
            pq.push(l);
            while(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>hi){
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
