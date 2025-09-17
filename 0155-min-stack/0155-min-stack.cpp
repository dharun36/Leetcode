class MinStack {
public:
    vector<int> minArr;
    vector<int> arr;

    MinStack() {}

    void push(int val) {
        int m;
        if (arr.empty()) {
            m = val;
        } else {
            m = min(val, minArr.back());
        }
        arr.push_back(val);
        minArr.push_back(m);
    }
    
    void pop() {
        arr.pop_back();
        minArr.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        return minArr.back();
    }
};
