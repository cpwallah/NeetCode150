class Solution {
public:
    bool isValid(string s) {
        deque<char>dq;
        for(auto l:s){
            if(dq.empty()){
                dq.push_back(l);
            }
            else{
                if(dq.back()=='[' && l==']'){
                    dq.pop_back();
                }
                else if(dq.back()=='(' && l==')'){
                    dq.pop_back();
                }
                else if(dq.back()=='{' && l=='}'){
                    dq.pop_back();
                }
                else{
                     dq.push_back(l);
                }
            }
        }
        if(dq.size()!=0){
            return false;
        }
        return true;
    }
};
