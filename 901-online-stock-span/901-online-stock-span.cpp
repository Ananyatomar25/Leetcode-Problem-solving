class StockSpanner {
public:
    stack<int> st;
    vector<int> vec;
    int i=0;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        vec.push_back(price);
        int ans;
        while(!st.empty() && price>=vec[st.top()]) st.pop();
        
        if(st.empty()) ans = i+1;
        else ans = i- st.top();
      
        st.push(i++);
        return ans;
    }
};