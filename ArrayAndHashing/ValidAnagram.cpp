class Solution {
public:
    bool isAnagram(string s, string t) {
      vector<int>v(26,0);
      vector<int>v1(26,0);
      for(auto l:s){
          v[int(l)-'a']+=1;
      } 
      for(auto lo:t){
          v1[int(lo)-'a']+=1;
      }
      if(v==v1){
          return true;
      }   
      return false;
    }
};
