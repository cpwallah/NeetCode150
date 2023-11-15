class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<float,int>>v;
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++){
            float x=pow(points[i][0],2);
            float y=pow(points[i][1],2); 
            float lol=sqrt(x+y);
            v.push_back({lol,i});
        }
        sort(v.begin(),v.end());
        for(auto l:v){
            
            if(k==0){
                break;
            }
            vector<int>hi;
            hi.push_back(points[l.second][0]);
            hi.push_back(points[l.second][1]);
            ans.push_back(hi);
            k-=1;
        }
        return ans;
    }
};
