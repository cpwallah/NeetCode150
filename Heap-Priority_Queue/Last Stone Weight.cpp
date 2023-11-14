class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto l:stones){
            pq.push(l);
        }
        while(pq.size()>=2){
            int maow=pq.top();
            pq.pop();
            int maows=pq.top();
            pq.pop();
            if(abs(maow-maows)==0){
                continue;
            }
            else{
                pq.push(abs(maow-maows));
            }
        }
        if(pq.size()==0){
            return 0;
        }
        return pq.top();
    }
};
