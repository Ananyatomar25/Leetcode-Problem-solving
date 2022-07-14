class MinStack {
public:
    stack <pair < int, int >> st;
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(st.empty()) st.push({val,val});
        else if(val < st.top().second){
            st.push({val,val});
        }
        else {
            st.push({val, st.top().second});
        }
    }
    
    void pop() {
        pair<int, int> temp = st.top();
        st.pop();
    }
    
    int top() {
        int res = st.top().first;
        return res;
    }
    
    int getMin() {
        int res = st.top().second;
        return res;
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