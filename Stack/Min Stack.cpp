class MinStack {
public:
    deque<int>min;
    deque<int>dq;
    MinStack() {
        
    }
    
    void push(int val) {
        dq.push_back(val);
        if(min.empty()){
            min.push_back(val);
        }
        else{
            if(min.back()>=val){
                min.push_back(val);
            }
        }
    }
    
    void pop() {
        int value=dq.back();
        dq.pop_back();
        if(!min.empty() && value==min.back()){
            min.pop_back();
        }
    }
    
    int top() {
        return dq.back();
    }
    
    int getMin() {
        return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
