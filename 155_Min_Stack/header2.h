#pragma once

#include <stack>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int val) {
        m_stack.push(val);

        // when val == getMin(), still need to push val to order stack
        // otherwise the number of same value doesn't match and pop() will 
        // yeild error.
        if (m_order.empty() || val <= getMin())
        {
            m_order.push(val);
        }
    }

    void pop() {
        if (!m_order.empty() && m_stack.top() == getMin())
        {
            m_order.pop();
        }

        m_stack.pop();
    }

    int top() {
        return m_stack.top();
    }

    int getMin() {
        return m_order.top();
    }

    stack<int> m_stack;
    stack<int> m_order;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */