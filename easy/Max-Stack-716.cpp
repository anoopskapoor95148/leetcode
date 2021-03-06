class MaxStack {
public:
    /** initialize your data structure here. */
    MaxStack() {}
    
    void push(int x) {
        if (s2.empty() || s2.top() <= x) s2.push(x);
        s1.push(x);
    }
    
    int pop() {
        if (!s2.empty() && s2.top() == s1.top()) s2.pop();
        int t = s1.top(); s1.pop();
        return t;
    }
    
    int top() {
        return s1.top();
    }
    
    int peekMax() {
        return s2.top();
    }
    
    int popMax() {
        int mx = s2.top();
        stack<int> t;
        while (s1.top() != s2.top()) {
            t.push(s1.top()); s1.pop();
        }
        s1.pop(); s2.pop();
        while (!t.empty()) {
            push(t.top()); t.pop();
        }
        return mx;
    }

private:
    stack<int> s1, s2;
};


/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack obj = new MaxStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.peekMax();
 * int param_5 = obj.popMax();
 */
