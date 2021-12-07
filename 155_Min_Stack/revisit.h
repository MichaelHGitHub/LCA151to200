#pragma once

#include <stack>
#include <list>

using namespace std;

class MinStack {
public:
    MinStack() {

    }

    void push(int val) {
        m_stack.push(val);

        int left = 0;
        int right = m_list.size() - 1;

        while (left <= right)
        {
            int mid = (right + left) / 2;
            list<int>::iterator it = next(m_list.begin(), mid);

            if (val == *it)
            {
                m_list.insert(it, val);
                break;
            }
            else if (val < *it)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (left > right)
        {
            m_list.insert(next(m_list.begin(), left), val);
        }
    }

    void pop() {
        int val = m_stack.top();
        m_stack.pop();

        int left = 0;
        int right = m_list.size() - 1;

        while (left <= right)
        {
            int mid = (right + left) / 2;
            list<int>::iterator it = next(m_list.begin(), mid);

            if (val == *it)
            {
                m_list.erase(it);
                break;
            }
            else if(val < *it)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }

    int top() {
        return m_stack.top();
    }

    int getMin() {
        return m_list.front();
    }

private:
    stack<int> m_stack;
    list<int> m_list;
};