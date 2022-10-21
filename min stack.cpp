class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>> st;
    void push(int x) {
        int minele;
        if(st.empty()){
            minele=x;
        }
        else{
            minele=min(x,st.top().second);
        }
        st.push({x,minele});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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
