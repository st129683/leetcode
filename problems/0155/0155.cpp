#include <vector>

class MinStack {
private:
    std::vector <std::pair <int, int>> stack_;

public:
    MinStack() {}

    void push(int val) {
        if (stack_.empty()) {
            stack_.emplace_back(val, val);
        } else {
            int prev_min = stack_[stack_.size() - 1].second;
            stack_.emplace_back(val, std::min(val, prev_min));
        }
    }

    void pop() {
        stack_.pop_back();
    }

    int top() {
        return stack_[stack_.size() - 1].first;
    }

    int getMin() {
        return stack_[stack_.size() - 1].second;
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
