#pragma once

#include <stack>
#include <list>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int val) {
        m_stack.push(val);

        list<int>::iterator left = m_list.begin();
        list<int>::iterator right = m_list.end();

        list<int>::iterator pos = right;

        while (left != right)
        {
            list<int>::iterator slow = left;
            list<int>::iterator fast = left;

            while (fast != right)
            {
                ++fast;
                if (fast != right)
                {
                    ++fast;
                    ++slow;
                }
                else
                {
                    break;
                }
            }

            if (*slow >= val)
            {
                pos = slow;
                right = slow;
            }
            else
            {
                left = ++slow;
            }
        }

        m_list.insert(pos, val);
    }

    void pop() {
        int val = m_stack.top();
        m_stack.pop();

        list<int>::iterator left = m_list.begin();
        list<int>::iterator right = m_list.end();

        list<int>::iterator pos = right;

        while (left != right)
        {
            list<int>::iterator slow = left;
            list<int>::iterator fast = left;

            while (fast != right)
            {
                ++fast;
                if (fast != right)
                {
                    ++fast;
                    ++slow;
                }
                else
                {
                    break;
                }
            }

            if (*slow == val)
            {
                pos = slow;
                break;
            }
            else if (*slow > val)
            {
                right = slow;
            }
            else
            {
                left = ++slow;
            }
        }

        m_list.erase(pos);
    }

    int top() {
        return m_stack.top();
    }

    int getMin() {
        return m_list.front();
    }

    stack<int> m_stack;
    list<int> m_list;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */