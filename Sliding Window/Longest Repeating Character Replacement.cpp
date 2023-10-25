class Solution {
public:
   int characterReplacement(string s, int k) {
     int i=0;
     int j=0;
     int ans=-1;
     int maxc=0;
     unordered_map<char,int>m;
     while(j<s.size()){
         m[s[j]]++;
         maxc=max(maxc,m[s[j]]);
         int currlen=j-i+1;
         if(currlen-maxc>k){
             m[s[i]]--;
             i++;
         }
         currlen=j-i+1;
         ans=max(ans,currlen);
         j++;
     }
     return ans;
   }
};
