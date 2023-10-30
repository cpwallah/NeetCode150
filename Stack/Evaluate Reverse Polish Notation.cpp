class Solution {
public:
    int evalRPN(vector<string>& s) {
        deque<string>dq;
        for(auto l:s){
            if(l=="+"){
                int maow1=stoi(dq.back());
                dq.pop_back();
                int maow2=stoi(dq.back());
                dq.pop_back();
                maow2+=maow1;
                string trap=to_string(maow2);
                dq.push_back(trap);
            }
            else if( l=="-"){
                int maow1=stoi(dq.back());
                dq.pop_back();
                int maow2=stoi(dq.back());
                dq.pop_back();
                maow2-=maow1;
                string trap=to_string(maow2);
                dq.push_back(trap);
            }
            else if(l=="*"){
                int maow1=stoi(dq.back());
                dq.pop_back();
                int maow2=stoi(dq.back());
                dq.pop_back();
                maow2*=maow1;
                string trap=to_string(maow2);
                dq.push_back(trap);
            }
            else if(l=="/"){
               int maow1=stoi(dq.back());
                dq.pop_back();
                int maow2=stoi(dq.back());
                dq.pop_back();
                maow2/=maow1;
                string trap=to_string(maow2);
                dq.push_back(trap);
            }
            else{
                dq.push_back(l);
            }
        }
        int maow=stoi(dq.back());
        return maow;
    }
};
