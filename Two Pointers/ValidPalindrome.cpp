class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(auto l:s){
            if(isdigit(l) || isalpha(l)){
                ans+=l;
            }
        }
        transform(ans.begin(),ans.end(),ans.begin(),::tolower);
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i++]!=ans[j--]){
                return false;
            }
            
        }
        return true;
    }
};
