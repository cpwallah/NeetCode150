class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int>v(26,0);
        vector<int>v1(26,0);
        for(auto l:s1){
            v[int(l)-'a']+=1;
        }
        int i=0;
        int j=s1.size()-1;
        for(int k=0;k<=j;k++){
            v1[int(s2[k])-'a']+=1;
        }
        if(v==v1){
            return true;
        }
        j+=1;
        for(int x=j;x<s2.size();x++){
            v1[int(s2[i++])-'a']-=1;
            v1[int(s2[j++])-'a']+=1;
            if(v==v1){
                return true;
            }
        }
        return false;
    }
};
