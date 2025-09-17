class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> s2;
        while(! s.empty() ){
            s2.push(s.top());
            s.pop();

        }

        int val = s2.top();
        s2.pop();

        while(! s2.empty()){
            s.push(s2.top());
            s2.pop();
        }

        return val;
    }
    
    int peek() {
        stack<int> s2;
        while(! s.empty() ){
            s2.push(s.top());
            s.pop();

        }

        int val = s2.top();
       

        while(! s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;

    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */