class MinStack {
public:
    
    stack < long long > st;
    long long mini;
    
    MinStack() {
      while (st.empty() == false) st.pop();
      mini = INT_MAX;
    }
    
    void push(int value) {
        long long val = (long long)value;
        if(st.empty()){
            mini = val;
            st.push(val);
        }
        
        else{
            if(val < mini){
                long long modified = (2*val) - mini;
                mini = val;
                st.push(modified);
            }
            else st.push(val);
        }
    }
    
    void pop() {
        if (st.empty()) return;
        long long el = st.top();
        st.pop();

    if (el < mini) {
      mini = 2 * mini - el;
    }
    }
    
    int top() {
        if (st.empty()) return -1;
        
        else if(st.top() < mini){
            return mini;
        }
        return st.top();
        
    }
    
    int getMin() {
        return mini;
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